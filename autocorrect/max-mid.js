var fs = require('fs');
var wordString = fs.readFileSync('fixtures/words.txt', 'utf8'); //get a string with the entire dictionary
var words = wordString.split('\n'); //turn the string into an array
var wordsByLen = []; //makes it faster to find comparable words by length
var wordsDict = []; //associative array which makes determining whether a word is valid easier

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

	var bestHammingDist = word.length;
	var bestWord = word;
	for(var i=0; i<comparableWords.length; i++){
		var toCompare = comparableWords[i];
		var currHammingDist = getHammingDist(word, toCompare);
		if(currHammingDist < bestHammingDist)
		{
			bestHammingDist = currHammingDist;
			bestWord = toCompare;
		}
	}

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
	computes the hamming distance between two strings (character by character)
	pre: the strings must be the same length
	post: hamming distance is returned
*/
function getHammingDist(str1, str2){
	var hammingDist = 0;
	for(var i=0; i<str1.length; i++)
	{
		if(str1.charAt(i) !== str2.charAt(i))
		{
			hammingDist++;
		}
	}

	return hammingDist;
}
