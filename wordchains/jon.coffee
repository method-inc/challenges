fs = require('fs')

word1 = process.argv[2]
word2 = process.argv[3]

# Graph is a dictionary with key: String word, value: [ array of nearby vertices ]
graph = { }

# Do something with every line in a file.
eachLine = (filePath, length, func) ->
  data = fs.readFileSync(filePath, 'utf8')
  lines = data.split('\n')
  func(line) for line in lines

# Add a word to the graph.
addWord = (word) ->
  graph[word] = [] if word1.length == word.length

# Returns true if one letter is different between two words.
slightlyDifferent = (w1, w2) ->
  differences = 0
  differences++ for i in [0..Math.max(w1.length, w2.length)-1] when w1[i] != w2[i]
  return differences == 1

# Returns a list of slightly different words from word.
slightlyDifferentWords = (word) ->
  w for w, vals of graph when slightlyDifferent(word, w)

# Build links between all vertices
buildEdges = ->
  graph[word] = slightlyDifferentWords(word) for word, edges of graph

# Breadth-first search for the destination word.
search = (destination, vertex, visited) ->
  marked = [ ]
  queue = [ ]
  queue.push [vertex, [vertex]]
  marked.push vertex

  while queue.length > 0
    [current, path] = queue.shift()

    if current == destination
      return path
    else if graph[current]
      for descendant in graph[current] when marked.indexOf(descendant) == -1
        descPath = []
        descPath.push(v) for v in path
        descPath.push(descendant)
        queue.push [descendant, descPath]
        marked.push descendant

# Make it happen: Load the graph, find the chain.
eachLine('words', word1.length, addWord)
buildEdges()

chain = search(word2, word1, [])
if chain
  console.log link for link in chain
else
  console.log "Sorry, there is no chain between '#{word1}' and '#{word2}'"
