var keymap = require("./fixtures/keymap.json");
var newMap = {};
var newMap2 = {};

module.exports = function() {
  function init() {
    setValues();
  }

  function setValues() {
    var i=0;
    for(var key in keymap) {
      newMap[key] = {};
      newMap[key][1] = getLetters(keymap[key]);
      setChildren(newMap[key][1], key, 1);
      i++;
    }

    for(var key2 in newMap) {
      var k = key2;
      newMap2[k] = {};
      for(var z = 1;z < 10;z++) {
        var nM2 = newMap[k][z];
        for (var b=0;b<nM2.length;b++) {
          newMap2[k][nM2[b]] = z;
        }
      }
    }
  }

  function setChildren(array, key, index) {
    index++;
    newMap[key][index] = [];
    for(var i=0;i<array.length;i++) {
      var letters = getLetters(getValues(array[i]));
      letters = checkForPreviousLetters(letters, key, index);
      if(letters.length > 0) pushInLetters(newMap[key][index], letters);
    }
    if(index !== 9) setChildren(newMap[key][index], key, index);
  }

  function pushInLetters(array, letters) {
    for(var i=0,b=letters.length;i<b;i++) {
      if(checkValue(array, letters[i]) === -1) array.push(letters[i]);
    }
    return array;
  }

  function checkForPreviousLetters(array, key, index) {
    if (index-1 === 0) {
      return array;
    }

    for(var i = 0; i < array.length; i++) {
      if (checkValue(newMap[key][index-1], array[i], key) !== -1) {
        array.splice(i,1);
        i--;
      }
    }
    index--;
    return checkForPreviousLetters(array, key, index);
  }

  function getLetters(value) {
    return value.split("");
  }

  function getValues(value) {
    return keymap[value];
  }

  function checkValue(a, b, key) {
    if (b === key) return 1;
    return a.indexOf(b);
  }

  init();
  return newMap2;
};