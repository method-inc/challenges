var fs = require('fs')

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
  var words = text.split('\n')
  var i = words.length
  while (i--) {
    if (words[i].length === length) dictionary.push(words[i].toLowerCase())
  }
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
  var subpaths = [], i = moves.length
  while (i--) {
    subpaths.push(path.slice(0).concat(moves[i]))
  }
  return subpaths
}

function findPath(dest, paths) {
  var i = paths.length, path, newPaths = []
  while (i--) {
    path = paths[i]
    if (path[path.length - 1] === dest) return path
  }
  i = paths.length
  while (i--) {
    newPaths = newPaths.concat(expandPath(paths[i]))
  }
  if (newPaths.length === 0) return undefined
  return findPath(dest, newPaths)
}


loadArgs()
loadDictionary(dictFile, words[0].length)
solution = findPath(words[1], [[ words[0] ]])

if (solution) {
  for (var i = 0; i < solution.length; i++) {
    console.log(solution[i])
  }
}
else {
  console.log('sorry, there is no chain between "' + words[0] + '" and "' + words[1] + '"')
}
