#!/usr/bin/env coffee
print = console.log

class Dictionary

  constructor: (@filePath, @base, @target) ->
    @wordLength = @base.length
    @availableWords
    @usedWords = {}
    @buildAvailableWords()

  # iterate through all lines of dictionary and build available words array of same length
  buildAvailableWords: () ->
    lines = require('fs').readFileSync(@filePath, 'utf8').split('\n')
    for line in lines when line.length is @wordLength and not @usedWords[line.toLowerCase()]
      @availableWords += " " + line.toLowerCase()
      @usedWords[line.toLowerCase()] = true

  # look for word in string
  findWord: (needle, haystack = @availableWords) ->
    haystack.match(new RegExp("\\b"+needle+"\\b")) isnt null

  # return all matching words in available words array
  findMatches: (needle, exclude = "") ->
    @availableWords.match new RegExp("\\b"+needle+"\\b", "g")

  # remove words from available
  removeWords: (words) ->
    @availableWords = @availableWords.replace(" "+word, "") for word in words

  # build regex string to search for word in dictionary
  buildRegexStrings: (word) ->
    word.substr(0, index) + "." + word.substr(index+1) for index in [0...word.length]

  # find words that are one letter off
  findLinksForWord: (word) ->
    links = []
    for pattern in @buildRegexStrings word
      matches = @findMatches pattern, word
      if matches
        links = links.concat matches
        @removeWords matches
    return links

  buildPossiblePathNextSteps: (path) ->
    newPaths = []
    newPaths.push path.concat(link) for link in @findLinksForWord path[path.length - 1]
    return newPaths

  findChain: (paths = [[@base]]) ->
    return null if not paths.length
    return path for path in paths when path[path.length - 1] == @target
    newPaths = []
    newPaths = newPaths.concat @buildPossiblePathNextSteps(path) for path in paths
    return @findChain newPaths



base = process.argv[2]
target = process.argv[3]
dictionary = new Dictionary './words', base, target

return print "Please supply two words." if not base or not target
return print "Please supply two unique words." if base is target
return print "Word lengths must match" if base.length isnt target.length
return print "First word is not a valid word." if not dictionary.findWord base
return print "Second word is not a valid word." if not dictionary.findWord target

links = dictionary.findChain()
if links
  print link for link in links  
else
  print "No chain could be found for those words."