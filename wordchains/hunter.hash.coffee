#!/usr/bin/env coffee

fs = require('fs')
permutations = {}

# Parses command line arguments
loadArgs = ->
  args = process.argv
  if args.length < 5
    console.log "\nsyntax:\n\n    coffee hunter.coffee <dictionary> <word1> <word2>"
    process.exit()
  return [args[2], [args[3].toLowerCase(), args[4].toLowerCase()]]

# Loads each word from the dictionary file, hashes each permutation that word can take
loadDictionary = (file, length) ->
  words = fs.readFileSync(file, 'utf-8').toLowerCase().split('\n')
  for word in words when word.length == length
    for perm in getPermutations(word)
      permutations[perm] ?= []
      permutations[perm].push(word)

# Nice optimization lifted from Kenny's solution
getPermutations = (word) ->
  return ([word.slice(0, i), '\0', word.slice(i + 1)].join('') for i in [0..word.length - 1])

# Returns a list of words that are one letter off from source
# Deletes possibilities once they've been tried
possibleMoves = (source) ->
  moves = []
  perms = getPermutations(source)
  for perm in perms when permutations.hasOwnProperty(perm)
    moves.push(word) for word in permutations[perm] when word != source
    delete permutations[perm]
  return moves

# Returns all options that could branch from a path, so [a, b] -> [[a, b, c], [a, b, d]]
branchPath = (path) ->
  moves = possibleMoves(path[path.length - 1])
  subpaths = (path.concat(move) for move in moves)
  return subpaths

# Recursively searches for `dest`, starting from the `path` array
findPath = (dest, paths) ->
  # First, check the current paths for success
  for path in paths
    if path[path.length - 1] == dest then return path
  # Next, branch each path into all of its possible next steps
  newPaths = []
  for path in paths
    newPaths = newPaths.concat(branchPath(path))
  # If none of our paths have next steps, then this chain is unsolvable (dead end)
  if newPaths.length == 0 then return undefined
  # Continue branching paths until we reach a conclusion
  return findPath(dest, newPaths)

# Load dictionary, find solution, display
[dictFile, words] = loadArgs()
loadDictionary(dictFile, words[0].length)
solution = findPath(words[1], [[ words[0] ]])

if solution
  console.log(step) for step in solution
else
  console.log('sorry, there is no chain between "' + words[0] + '" and "' + words[1] + '"')