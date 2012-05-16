#!/usr/bin/env coffee

fs = require('fs')
dictionary = []

wrap = (fn) ->
  this.time = 0
  return ->
    start = Date.now()
    fn.apply(this, arguments)
    @time += Date.now() - start

# Parses command line arguments
loadArgs = ->
  args = process.argv
  if args.length < 5
    console.log "\nsyntax:\n\n    coffee hunter.coffee <dictionary> <word1> <word2>"
    process.exit()
  return [args[2], [args[3].toLowerCase(), args[4].toLowerCase()]]

# Loads each word from the dictionary file into `dictionary` array
loadDictionary = (file, length) ->
  text = fs.readFileSync(file, 'utf-8')
  dictionary = (word.trim().toLowerCase() for word in text.split('\n') when word.length == length)

# Returns a list of words that are one letter off from source
possibleMoves = (source) ->
  moves = []
  newDictionary = []
  i = 0
  for word in dictionary
    if differences(word, source) == 1 then moves.push(word)
    else newDictionary.push(word)
  dictionary = newDictionary
  return moves

# Counts the number of differences between two words
differences = (a, b) ->
  diff = 0  # would this do something weird because of scope if I used 'differences?'
  diff++ for i in [0..a.length - 1] when a[i] != b[i]
  return diff

# Returns all options that could stem from a path, eg a = [{val: 'foo', prev: *}] -> [{val: 'bar', prev: a}, {val: 'baz', prev: a}]
expandPath = (path) ->
  moves = possibleMoves(path.val)
  subpaths = []
  subpaths.push({val: move, prev: path}) for move in moves
  return subpaths

# Recursively searches for `dest`, starting from the `path` array
findPath = (dest, paths) ->
  for path in paths
    if path.val == dest then return path
  newPaths = []
  for path in paths
    newPaths = newPaths.concat(expandPath(path))
  if newPaths.length == 0 then return undefined
  return findPath(dest, newPaths)

for fn in ['loadDictionary', 'possibleMoves', 'differences', 'expandPath', 'findPath']
  exports[fn] = wrap(exports[fn])

console.log(loadDictionary.toString())

# Load dictionary, find solution, display
[dictFile, words] = loadArgs()
loadDictionary(dictFile, words[0].length)
solution = findPath(words[1], [{ val: words[0] }])
console.log("solution:", solution)
console.log("loadDictionary:", loadDictionary.time)
console.log("possibleMoves:", possibleMoves.time)
console.log("differences:", differences.time)
console.log("expandPath:", expandPath.time)
console.log("findPath:", findPath.time)

process.exit()
if solution
  console.log(step) for step in solution
else
  console.log('sorry, there is no chain between "' + words[0] + '" and "' + words[1] + '"')