var fs = require('fs')
var _ = require('underscore')._

var dictFile, words = [], dictionary = []

function loadArgs() {
  args = process.argv
  if (args.length < 5)
    console.log('\nsyntax:\n\n    node hunter <dictionary> <word1> <word2>')
  dictFile = args[2]
  words[0] = args[3].toLowerCase()
  words[1] = args[4].toLowerCase()
}

function loadDictionary(file, length) {
  var text = fs.readFileSync(file, 'utf-8')
  _.each(text.split('\n'), function(word) {
    if (word.length === length) dictionary.push(word.toLowerCase());
  });
}

function possibleMoves(source) {
  var moves = [], i = 0
  while (i < dictionary.length) {
    if (areNeighbors(dictionary[i], source)) {
      moves.push(dictionary[i])
      dictionary.splice(i, 1)
    }
    else {
      i++
    }
  }
  return moves
}

function areNeighbors(a, b) {
  var diff = 0, i = a.length
  while (i--) {
    if (a[i] !== b[i] && ++diff > 1) return false
  }
  return diff === 1
}

function expandPath(path) {
  var moves = possibleMoves(path[path.length - 1])
  return _.map(moves, function(move) {
    return path.slice(0).concat(move)
  })
}

function findPath(dest, paths) {
  var i = paths.length, path, newPaths = []
  while (i--) {
    path = paths[i]
    if (path[path.length - 1] === dest) return path
  }
  _.each(paths, function(path) {
    newPaths = newPaths.concat(expandPath(path))
  })
  if (newPaths.length === 0) return undefined
  return findPath(dest, newPaths)
}

loadArgs()
loadDictionary(dictFile, words[0].length)
solution = findPath(words[1], [[ words[0] ]])

if (solution) {
  _.each(solution, function(step) { console.log(step) })
}
else {
  console.log('sorry, there is no chain between "' + words[0] + '" and "' + words[1] + '"')
}
