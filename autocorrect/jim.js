var fs = require('fs'),
    dict,
    freqMap = {},
    keyMap,
    inputText,
    words;


function stripWord(word) {
  return word.replace(/[^\w\s]|_/g, "").replace(/\s+/g, " ").trim().toLowerCase();
}

// find keyboard distance between two words
function keyboardDistance(a, b) {

}

// find map of keyboard distances for a word against all others
function keyboardDistanceMap(word) {

}

// find hamming distance between two words
function hammingDistance(a, b) {
  var dist = 0;
  a.split("").forEach(function(letter, i) {
    if (b[i] != letter) dist++;
  });
  return dist;
}

// find map of hamming distances for a word against all others
function hammingDistanceMap(word) {
  var map = {};
  dict.forEach(function(pos) {
    if (word.length !== pos.length) return;
    var dist = hammingDistance(word, pos);
    if (map[dist]) map[dist].push(pos);
    else map[dist] = [pos];
  });
  return map;
}

// find closest words by hamming distance
function closestWordsByHammingDistance(word) {
  var map = hammingDistanceMap(word),
      options = null,
      dist = 0;
  while(dist < 12) {
    if (map[dist]) {
      options = map[dist];
      break;
    }
    dist++;
  }
  return options || [word];
}

// find the most frequent word in an array of words
function mostFrequentWord(words) {
  if (words.length == 1) return words[0];
  
  var bestWord = words[0], 
      frequency = freqMap[bestWord];
  words.forEach(function(w) {
    if (freqMap[w] > frequency) {
      bestWord = w;
      frequency = freqMap[w];
    }
  });
  return bestWord;
}

function isNumber(string) {
  return !isNaN(parseFloat(string)) && isFinite(string);
}

function isUpperCase(character) {
  return character == character.toUpperCase();
}

function isPuncuation(character) {
  return (/[^\w\s]|_/g).test(character);
}

// output a replacement word with matching format of another
function matchFormat(newWord, oldWord) {
  var charIndex = 0,
      matchedWord = "";
  oldWord.split("").forEach(function(character, i) {
    if (isPuncuation(character) || !newWord[charIndex]) {
      matchedWord += character;
      return;
    }

    matchedWord += isUpperCase(character) ? newWord[charIndex].toUpperCase() : newWord[charIndex];
    charIndex++;
  });
  return matchedWord;
}


var start = new Date();

// get dictionary of valid words
dict = fs.readFileSync('fixtures/words.txt', 'utf-8').split("\n");

// get frequency library and map words
var freqFile = fs.readFileSync('fixtures/wordfrequency.txt', 'utf-8');
freqFile.split("\n").forEach(function(line, i) {
  if (i === 0) return;
  var pieces = line.split("\t"),
      word = pieces[1],
      freq = parseInt(pieces[3], 10);
  freqMap[word] = freq;
});

//get key distance mapping
keyMap = require('./fixtures/keymap.json');

// pull in test file for autocorrect
inputText = fs.readFileSync(process.argv[2] || 'fixtures/test-frequency.txt', 'utf-8');

// split text into array of words
words = inputText.replace(/\n/g, " \n").split(" ");

words.forEach(function(w, i) {

  var word = stripWord(w);

  // check for word of only spaces/punctuation, or valid word in dictionary
  if (word === '' || dict.indexOf(word) > -1 || isNumber(word)) return;
  
  var possibleReplacements = closestWordsByHammingDistance(word);
  var bestWord = mostFrequentWord(possibleReplacements);
  words[i] = matchFormat( bestWord, words[i] );

  // console.log(possibleReplacements);
});

console.log("\n============  original  ==============");
console.log(inputText);
console.log("\n============  corrected  ==============");
console.log(words.join(" "));
console.log("\n============  time spent  ==============");

console.log("time: " + (new Date() - start));