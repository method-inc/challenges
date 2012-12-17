var fs = require('fs');
var wordString = fs.readFileSync('fixtures/words.txt', 'utf8'); //get a string with the entire dictionary
var words = wordString.split('\n'); //turn the string into an array
var wordsByLen = []; //makes it faster to find comparable words by length
var wordsDict = []; //associative array which makes determining whether a word is valid easier

//var kBDistDict = []; //will be multidimensional array, where you give two letters and the distance between them is returned

for(var i=0; i<words.length; i++){
	var current = words[i];
	var wordLen = current.length;
	if(!wordsByLen[wordLen]) //create empty array at this position if there isn't an array already
	{
		wordsByLen[wordLen] = []
	}
	wordsByLen[wordLen].push(current); //add the current word to the array index where all other words of the same length are stored
	wordsDict[current] = true;
}

/*-------------------------------------------------------------*/

var fs2 = require('fs');
var keymapStr = fs2.readFileSync('fixtures/keymap.json', 'utf8');
var keymapObj = JSON.parse(keymapStr);
var charDist = [];
var alphabet = "abcdefghijklmnopqrstuvwxyz"
for(var i=0; i<alphabet.length; i++){
	var letter = alphabet[i];
	var alreadyCounted = [];
	charDist[letter] = [];
	charDist[letter][letter] = 0;
	alreadyCounted.push(letter);
	createCharDistArr(letter, letter, 0, alreadyCounted);
}

/*-------------------------------------------------------------*/

process.stdin.resume();
process.stdin.setEncoding('utf8');

var totalChunk = '';
process.stdin.on('data', function (chunk) {
	totalChunk += chunk;
});

process.stdin.on('end', function() {
	process.stdout.write(correct(totalChunk));
});

function correct(str){
	var strArr = str.split(/\b/); //split at each word boundary
	//var strArr = str.split(/[^a-zA-Z]/);
	var newStr = "";
	for(var i=0; i<strArr.length; i++){
		var current = strArr[i];

		var alpha = /[a-zA-Z]/;
		var numbers = /[0-9]/;
		if(alpha.exec(current) && !numbers.exec(current))
		{
			newStr += getCorrectedWord(current);
		}
		else
		{
			newStr += current;
		}

		/*if(current) //some values are undefined
		{
			newStr += getCorrectedWord(current) + " ";
		}*/
	}

	//newStr = newStr.replace(/ were/, "xx");

	return newStr + "\n";
	//return wordsByLen[3].join(" | ");
}


/*
	gets the corrected word (or returns the same word if it's already correct)
	pre: the word must be only letters; no punctuation or numbers
	post: the corrected word is returned
*/
function getCorrectedWord(word){
	var caseSensitiveWord = word;
	var capitalAlpha = /[A-Z]/;

	word = word.toLowerCase();

	if(wordsDict[word]) //if the word is correct already
	{
		return caseSensitiveWord;
	}

	var comparableWords = wordsByLen[word.length]; //gets all correct words of the same length

	var bestKbDist = 13;
	var bestWord = word;
	for(var i=0; i<comparableWords.length; i++){
		var toCompare = comparableWords[i];
		var currKbDist = getKbDist(word, toCompare);
		if(currKbDist < bestKbDist)
		{
			bestKbDist = currKbDist;
			bestWord = toCompare;
		}
	}

	if(bestKbDist > 12)
	{
		return caseSensitiveWord;
	}

	/*var bestHammingDist = word.length;
	var bestWord = word;
	for(var i=0; i<comparableWords.length; i++)
	{
		var toCompare = comparableWords[i];
		var currHammingDist = getHammingDist(word, toCompare);
		if(currHammingDist < bestHammingDist)
		{
			bestHammingDist = currHammingDist;
			bestWord = toCompare;
		}
	}*/

	if(capitalAlpha.exec(caseSensitiveWord)) //if the original word had capital letters
	{
		for(var i=0; i<word.length; i++){
			var currentChar = caseSensitiveWord[i];
			if(currentChar === currentChar.toUpperCase())
			{
				bestWord = bestWord.substring(0, i) + bestWord[i].toUpperCase() + bestWord.substring(i+1, bestWord.length);
			}
		}
	}

	return bestWord;
}

/*
	computes the keyboard distance between two strings (sum of distances between individual characters)
	pre: the strings must be the same length and their characters must be in kBDistDict (all alpha characters)
	post: keyboard distance is returned
*/
function getKbDist(str1, str2){
	var kBDist = 0;

	for(var i=0; i<str1.length; i++){
		var char1 = str1[i];
		var char2 = str2[i];
		kBDist += charDist[char1][char2];
	}

	return kBDist;
}


function createCharDistArr(originalChar, currentChar, count, alreadyCounted)
{
	if(count <= 9)  //9 is the farthest possilbe distance
	{
		if((!charDist[originalChar][currentChar] || count < charDist[originalChar][currentChar]) && currentChar !== originalChar)
		{
			charDist[originalChar][currentChar] = count;
			alreadyCounted[currentChar] = true;
		}

		var adjacentChars = keymapObj[currentChar];
		for(var i=0; i<adjacentChars.length; i++)
		{
			var adjChar = adjacentChars[i];
			createCharDistArr(originalChar, adjChar, count+1, alreadyCounted);
		}
	}
}
