var fs = require('fs');
var path = require('path');

var MODE = ['jr', 'mid', 'sr'][process.argv[2] || 2];
var RE_NON_ALPHA = /[^a-zA-Z]/g;
var RE_WHITESPACE = /\s+/;

var keyMap = require('./fixtures/keymap.json');
var keyGraph = graphFromMap(keyMap);
var words = loadWords();
var wordLengths = buildLengths();
var findDistance = (MODE === 'sr') ? findDistanceKey : findDistanceHam;

getInput(onInput);

function onInput(err, string) {
  var corrected = autocorrect(string);
  console.log(corrected + '\n');
}

function buildLengths() {
  var lengths = {};
  Object.keys(words).forEach(function(word) {
    var container = lengths[word.length] = lengths[word.length] || [];
    container.push(word);
  });
  return lengths;
}

function graphFromMap(map) {
  return breadthFirst();

  function breadthFirst() {
    var roots = {};
    Object.keys(map).forEach(function(key) { roots[key] = {}; roots[key][key] = 0; });

    var queue = Object.keys(roots).map(function(key) {
      return { key: key, container: roots[key], distance: 1};
    });

    while (queue.length) queue = queue.concat(graphMapDistance(queue.shift()));
    return roots;
  }

  function graphMapDistance(options) {
    var connections = map[options.key].split('');
    var remainingConnections = [];

    connections.forEach(function(connection) {
      if (typeof options.container[connection] === 'undefined') {
        options.container[connection] = options.distance;
        remainingConnections.push({ key: connection, container: options.container, distance: options.distance + 1 });
      }
    });
    return remainingConnections;
  }
}

function loadWords() {
  var dictionary = {};
  var arWords = fs.readFileSync('fixtures/words.txt', 'utf8').split('\n');
  arWords.forEach(function(word, index) {
    if (!dictionary[word]) dictionary[word] = index + 1;
  });
  return dictionary;
}

function autocorrect(string) {
  var punctuation = [];
  var simpleString = string.replace(RE_NON_ALPHA, onReplace).toLowerCase();
  var tokens = simpleString.split(RE_WHITESPACE);
  var corrected = tokens.map(correctWord).join(MODE === 'jr' ? ' ' : '');

  if (MODE !== 'jr') {
    punctuation.forEach(function(item) {
      corrected = [corrected.slice(0, item.offset), item.string, corrected.slice(item.offset)].join('');
    });
    corrected = corrected.split('').map(function(letter, index) {
      return (string[index] === string[index].toUpperCase()) ? letter.toUpperCase() : letter;
    }).join('');
  }
  return corrected;

  function onReplace(match, offset) {
    punctuation.push({ string: match, offset: offset });
    return ' ';
  }
}

function correctWord(target) {
  if (words[target]) return target;
  var sameLengthWords = wordLengths[target.length] || [];
  var closest = findClosest(target, sameLengthWords);
  if (closest.words.length === 0 || MODE === 'sr' && closest.distance > 12) return target;
  return findMostFrequent(closest);
}

function findMostFrequent(closest) {
  var minIndex = Infinity;
  var match;
  closest.words.forEach(function(word) {
    if (words[word] < minIndex) {
      minIndex = words[word];
      match = word;
    }
  });
  return match;
}

function findClosest(original, neighbors) {
  var shortest = 12,
      distance;

  var closest = neighbors.reduce(function(closestArray, neighbor, index, array) {
    distance = findDistance(original, neighbor, shortest);
    if (distance < shortest) {
      shortest = distance;
      return [neighbor];
    }
    if (distance === shortest) closestArray.push(neighbor);
    return closestArray;
  }, []);

  return {
    words: closest,
    distance: shortest
  };

}

function findDistanceKey(wordA, wordB, shortest) {
  var distance = 0,
      i = wordA.length;

  var d;
  while(i--) {
    d = keyGraph[wordA[i]][wordB[i]];
    if (typeof d === 'undefined') return Infinity;
    distance += d;
    if (distance > shortest) return Infinity;
  }
  return distance;
}

function findDistanceHam(wordA, wordB) {
  var distance = 0,
      i = wordA.length;
  while (i--) if (wordA[i] !== wordB[i]) distance++;
  return distance;
}

function getInput(done) {
  var data = '';

  process.stdin.resume();
  process.stdin.setEncoding('utf8');

  process.stdin.on('data', function(chunk) { data += chunk; });
  process.stdin.on('end', function() { done(undefined, data); });
}
