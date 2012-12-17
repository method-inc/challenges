var fs = require("fs"),
    wordList = [],
    testString = '',
    start, end,
    newString = '',
    allKeysObject = {},
    numberCheck = /\d+/,
    symbolCheck = /\W+/,
    newLines = [],
    apostrophes = [],
    capitalLetters = /[A-Z]/,
    setNewMap = require('./keys.js'),
    keyMap = new setNewMap(),
    _ = require("underscore");

function getWords(callback) {
  fs.readFile('./fixtures/words.txt', 'utf8', function(err, data) {
    wordList = data.split('\n');
    callback();
  });
}

function getInput(callback) {
  fs.readFile('./fixtures/test-before.txt', 'utf8', function(err, data) {
    testString = data;
    callback();
  });
}

function writeOutput() {
  newString = newString.substr(0, newString.length-1);
  fs.writeFile('./output.txt', newString, function(err) {
    if(err) console.log(err);
  });
  end = (new Date() - start)/1000;
  console.log('Completed in ', end, ' seconds');
}

function removeNewLines() {
  var tS = testString.split('');
  for(var i=0,j=tS.length;i<j;i++) {
    if(tS[i] === "\n" ||
      tS[i] === "'" ||
      tS[i] === '-' ||
      tS[i] === '.' ||
      tS[i] === '!' ||
      tS[i] === ',' ||
      tS[i] === '?' ||
      tS[i] === ':' ||
      tS[i] === ';' ||
      tS[i] === '(' ||
      tS[i] === ')') {
      newLines.push({'char':tS[i],'ind':i});
    }
  }
  testString = testString.replace(/[\n\(\)\-\'\.\!\?\,\:\;]/g, " ");
}

function replaceNewLines() {
  for(var i=0,j=newLines.length;i<j;i++) {
    newString = newString.substr(0,newLines[i].ind)+newLines[i]['char']+newString.substr(newLines[i].ind+1);
  }
}

function loopWords() {
  var test = testString.split(' ');
  for(var i = 0,z = test.length;i < z; i++) {
    var w = test[i];
    if (w !== '' && findSomething(wordList, w) === -1 && !checkForNumbers(w)) {
      likeWordArray = buildLikeWords(test[i]);
      if (likeWordArray.length === 1) w = likeWordArray[0].word;
      else {
        var setFreqWord = setFreq(likeWordArray);
        w = likeWordArray.sort(getHighestFrequency)[0].word;
      }
    }
    newString += w+' ';
  }
}

function getHighestFrequency(a, b) {
  return a.freq - b.freq;
}

function buildLikeWords(word) {
  var original = word.split(''),
      w = word.toLowerCase().split(''),
      likeWordObject = {};
  for(var i = 0,z = wordList.length;i < z; i++) {
    if(wordList[i].length === w.length) {
      var lW = wordList[i].split(''),
          count = 0,
          skipped = false;

      for (var b = 0, c=lW.length; b < c; b++) {
        if(lW[b] !== w[b]) {
          var gC = getCount(w[b], lW[b]);
          count += gC;
        }
        if(count > 12) {
          skipped = true;
          break;
        }
      }

      if (!skipped) {
        var wordCheck = checkCapitalLetters(wordList[i], original);
        likeWordObject[wordList[i]] = {'count':count, 'word':wordCheck};
        if (likeWordObject[wordList[i]].count === 1) break;
      }
    }
  }

  if (isEmpty(likeWordObject)) return [{'word':word}];
  var theWord = getClosestWords(likeWordObject, 1);
  return theWord;
}

function getCount(originalLetter, newLetter) {
  return keyMap[originalLetter] ? keyMap[originalLetter][newLetter] : 12;
}

function setFreq(object) {
  for(var key in object) {
    object[key].freq = findSomething(wordList, object[key].word);
  }
  return object;
}

function isEmpty(obj) {
  for(var key in obj) {
    return false;
  }
  return true;
}

function checkForNumbers(word) {
  return word.match(numberCheck);
}

function checkCapitalLetters (newWord, original) {
  newWord = newWord.split('');
  for(var i=0;i<original.length;i++) {
    if (original[i].match(capitalLetters)) {
      newWord[i] = newWord[i].toUpperCase();
    }
  }
  return newWord.join().replace(/,/g,"");
}

function getClosestWords(wordObject, i) {
  var likeWords = [];
  for(var key in wordObject) {
    likeWords.push(wordObject[key]);
  }
  likeWords = likeWords.sort(function(a,b) {return a.count - b.count;});
  likeWords = likeWords.filter(function(val) { return val.count === likeWords[0].count });
  return likeWords;
}

function findSomething(array, value) {
  value = value.toLowerCase();
  for(var i=0,z=array.length;i<z;i++) {
    if(array[i] === value) return i;
  }
  return -1;
}
start = new Date();
getWords(function(){
  getInput(function(){
    removeNewLines();
    loopWords();
    replaceNewLines();
    writeOutput();
  });
});