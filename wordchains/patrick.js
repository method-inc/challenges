/*globals console*/

var main = function (command, arg1, arg2) {
    if (command === "words" && arg1 && arg2) {
       var start = new Date();
       var path = findPath(arg1, arg2);
       var end = new Date();
       if (path)  {
            console.log(path.join('\n'));
            console.log((path.length - 1) + ' steps.');
       } else {
            console.log('sorry, there is no chain between "' + arg1 + '" and "' + arg2 + '"');
       }
       console.log('It took ' + (end-start) + ' milliseconds.');
    } else if (command === "test") {
        runUnitTests();
    } else {
        console.log("Usage:\n- node patrick.js words this that\n- node patrick.js test");
    }
};


var fs = require('fs');

var availableWords = {};

var letters = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'];

var last = function (a) {
    return  a.slice(-1)[0];
};

function replaceLetter(word,index,letter) {
    return word.substr(0,index) + letter + word.substr(index+1);
}

var findPath = function (source, target) {
    availableWords = loadWordsOfLength(source.length);
    tryWord(source);
    return search(source, target);
};

var loadWordsOfLength = function (length) {
    var words =  {};
    var data = fs.readFileSync("./words");
    data.toString().split('\n').forEach(function(word) {
        if (length === word.length) words[word] = true;
    });
    return words;
};

var tryWord = function (word) {
    //console.log('trying', word, availableWords[word]);
    if (availableWords[word]) {
        availableWords[word] = false;
        return true;
    }
    return false;
};

var search = function (source, target) {
    return searchExactMatch(source, target) || searchDirectSteps(source, target) || searchIndirectSteps(source, target);
};

var searchExactMatch = function (source, target) {
    if (source === target) {
        return [source];
    }
    return false;
};

var searchDirectSteps = function(source, target) {

    var i;
    var path;
    var step;
    for (i = 0; i < source.length; i++) {
        step = replaceLetter(source, i, target.charAt(i));
        if (tryWord(step)) {
            path = search(step, target);
            if(path) {
                path.unshift(source);
                return path;
            }

        }
    }

    return false;

};


var searchIndirectSteps = function(source, target) {

    var i;
    var letterIndex;
    var path;
    var step;

    for (i = 0; i < source.length; i++) {
        for (letterIndex = 0; letterIndex < letters.length; letterIndex++) {
            step = replaceLetter(source, i, letters[letterIndex]);
            if (tryWord(step)) {
                path = search(step, target);
                if(path) {
                    path.unshift(source);
                    return path;
                }
            }
        }

    }

    return false;

};


var runUnitTests = function () {
    var assertEquals = function (name, expected, actual) {
        if (expected.toString() === actual.toString()) {
            console.log(name +  ": passed");
        } else {
            console.log(name + ': failed -- expected', actual, 'to equal', expected);
        }
    };

    assertEquals('same word', ['cut'], findPath('cut', 'cut'));
    assertEquals('one word away', ['cut', 'cat'], findPath('cut', 'cat'));
    assertEquals('two words away', ['hot', 'cot', 'cat'], findPath('hot', 'cat'));
    assertEquals('three words away', ['hop', 'cop', 'cap', 'cat'], findPath('hop', 'cat'));
    assertEquals('three words away, indirectly', ['find', 'wind', 'wird', 'word'], findPath('find', 'word'));
    assertEquals('"reading" can\'t be connected to "distant"', false, findPath('reading', 'distant'));
};


main.apply(null, process.argv.splice(2));

exports.findPath = findPath;

