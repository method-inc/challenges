#!/usr/bin/env coffee

fs = require('fs')
dictionary = []

# Parses command line arguments
loadArgs = ->
  args = process.argv
  if args.length < 5
    console.log "\nsyntax:\n\n    coffee hunter.coffee <dictionary> <word1> <word2>"
    process.exit()
  return [args[2], [args[3].toLowerCase(), args[4].toLowerCase()]]

# Loads each word from the dictionary file into `dictionary` array
loadDictionary = (file, length) ->
  words = fs.readFileSync(file, 'utf-8').toLowerCase().split('\n')
  dictionary = (word for word in words when word.length == length)

# Returns a list of words that are one letter off from source
possibleMoves = (source) ->
  moves = []
  i = 0
  while i < dictionary.length
    if areNeighbors(dictionary[i], source)
      moves.push(dictionary[i])
      dictionary.splice(i, 1)
    else
      i++
  return moves

# Returns whether or not two words are one step apart
areNeighbors = (a, b) ->
  diff = 0
  for i in [0..a.length - 1]
    if a[i] != b[i] && ++diff == 2 then return false
  return diff == 1

# Returns all options that could stem from a path, eg [a, b] -> [[a, b, c], [a, b, d]]
expandPath = (path) ->
  moves = possibleMoves(path[path.length - 1])
  subpaths = (path.concat(move) for move in moves)
  return subpaths

# Recursively searches for `dest`, starting from the `path` array
findPath = (dest, paths) ->
  for path in paths
    if path[path.length - 1] == dest then return path
  newPaths = []
  for path in paths
    newPaths = newPaths.concat(expandPath(path))
  #console.log("possible paths:", newPaths.length,"dictionary:", dictionary.length)
  if newPaths.length == 0 then return undefined
  return findPath(dest, newPaths)

# Load dictionary, find solution, display
[dictFile, words] = loadArgs()
loadDictionary(dictFile, words[0].length)
solution = findPath(words[1], [[ words[0] ]])

if solution
  console.log(step) for step in solution
else
  console.log('sorry, there is no chain between "' + words[0] + '" and "' + words[1] + '"')