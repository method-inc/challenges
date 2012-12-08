var fs = require('fs');

var lines = fs.readFileSync('wordfrequency.txt', 'utf-8').split('\n');
var words = fs.createWriteStream('words.txt', {'flags': 'w'});

var alphaOnly = /^[a-zA-Z]+$/;
var nonAlpha = /\W/g;

lines.shift();
lines.forEach(function(line, index) {
  var tabs = line.split('\t');
  var word = tabs[1];
  if (word) {
    var alpha = word.replace(nonAlpha, '').toLowerCase();
    //if (alphaOnly.test(word)) words.write(tabs[1] + '\n');
    words.write(alpha + '\n');
  }
});

console.log('done');