#!/usr/bin/env coffee

fs         = require 'fs'
path       = require 'path'

usage = ->
  console.log("USAGE: words.coffee <filename> <start> <end>")

# Get command line arguments
ourArgs = process.argv.slice 2
if ourArgs.length < 3
  return usage()
[filename, start, end] = ourArgs

if !start || !end || start.length != end.length
  usage()
  return console.error("ERR: Please pass 2 words that are the same length.")

if !filename || !fs.statSync(filename).isFile()
  usage()
  return console.error("ERR: Please pass a valid words file as the first argument")

# iterate through all lines of dictionary and build available words array of same length
# I stole this from Jim.
buildAvailableWords = (filePath, targetLength = 0) ->
  lines = fs.readFileSync(filePath, 'utf8').split('\n')
  line.toLowerCase() for line in lines when line.length > 0 && (!targetLength || line.length == targetLength)

# Build word list, only including words that are the same length as the given starting word
words = buildAvailableWords filename, start.length

if !(start in words)
  return console.error("ERR: " + start + " is not in the list of allowed words")
if !(end in words)
  return console.error("ERR: " + end + " is not in the list of allowed words")



# Data structure for holding a tree of words. The node is the word itself and the children  
# are words that differ by one letter
class WordTree
  constructor: (@word, @parent = null)->
    @children = null
  
  # return true if this node or any parents match the given word
  hasWord: (other)->
    return true if @word == other
    return false if !@parent
    return @parent.hasWord other
  
  # return an array of words that differ from this word by 1 letter
  nearbyWords: ->
    new_word for new_word in words when !@hasWord(new_word) && @wordDiff(new_word) == 1
  
  # get the character difference between this word and the given word
  wordDiff: (new_word)->
    new_chars = new_word.split ''
    old_chars = @word.split ''
    new_chars.reduce (prev, char, i) -> 
      if old_chars[i] != char 
        prev + 1 
      else 
        prev + 0
    , 0
  
  # construct the tree, search through it recursively to find a path to the given word
  # using a (sort-of) breadth-first search. returns the array of words from @word to
  # destination, or false if no path was found.
  pathTo: (destination)->
    # base case: if this is the destination word, return it
    if destination == @word
      return [@word]
    
    # create the array of children words
    @children ?= @nearbyWords().map (word, i)=>
      new WordTree word, this
    
    # first see if any of the children are the target word
    for child in @children
      if child.word == destination
        dest = child.pathTo destination
        dest.unshift @word
        return dest
    
    # sort children by similarity (more similar words come first)
    @children = @children.sort (a, b)->
      a.wordDiff(destination) - b.wordDiff(destination)
    
    # search the children for a path to the destination word
    for child in @children
      dest = child.pathTo destination
      if dest != false
        dest.unshift @word
        return dest
    
    # no path was found :(
    false



path = new WordTree(start).pathTo(end)

if !path || path.length == 0
  console.log("Sorry, no path could be found between " + start + " and " + end)
else 
  console.log("\nPath from " + start + " to " + end + ":")
  console.log(word + " ->") for word, i in path when i < path.length-1
  console.log(end + "\n")