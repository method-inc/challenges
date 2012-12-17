var fs = require('fs');
var input = "";
var words = fs.readFileSync('fixtures/words.txt').toString().split("\n");
var keymap = JSON.parse(fs.readFileSync('fixtures/keymap.json').toString());
var wordsbycharacter = {0: [], 1 : [], 2 : [], 3 : [], 4 : [], 5 : [],
                        6 : [], 7 : [], 8 : [], 9 : [], 10 : [], 11 : [],
                        12 : [], 13 : [], 14 : [], 15 : [], 16 : [], 17 : [],
                        18 : [], 19 : [], 20 : []};
var keydistancemap = [];

for (i in words) {
  var trimmed = words[i].toLowerCase().trim();
  wordsbycharacter[trimmed.length][wordsbycharacter[trimmed.length].length] = trimmed;
}

function keepcase(src, dst) {
  var newdst = "";
  for (var i = 0; i < src.length; i++){
    if (src[i].charCodeAt(0) > 64 && src[i].charCodeAt(0) < 91)
      newdst += String.fromCharCode(dst[i].charCodeAt(0) - 32);
    else
      newdst += dst[i];
  }
  return newdst;
}

function keymapdistance(src, dst) {
  var sum = 0;
  for (var i = 0; i < src.length; i++){
      sum += keydistancemap[src[i]][dst[i]];
      if (sum > 12)
        break;
  }
  return sum;
}

function find_min_dist(q, dist){
  var min = 20, mini = 0;
  for (var i in q){
    if (dist[q[i]] != undefined && dist[q[i]] < min){
      min = dist[q[i]];
      mini = i;
    }
  }
  return mini;
}

function distancebetweenkeys(a, b){ /* dijkstras */
  var dist = {};
  var previous = {};
  var q = [];
  for (var key in keymap) {
    dist[key] = undefined;
    previous[key] = undefined;
    q.push(key);
  }

  dist[a] = 0;

  while (q.length > 0){
    u = find_min_dist(q, dist);
    rem = q.splice(u,1);

    if (rem[0] == undefined)
      break;
    for (var v in keymap[rem[0]].split('')) {
      var alt = dist[rem[0]] + 1;
      if (dist[keymap[rem[0]][v]] == undefined || alt < dist[keymap[rem[0]][v]]){
        dist[keymap[rem[0]][v]] = alt;
        previous[keymap[rem[0]][v]] = rem[0];
      }
    }
  }

  var s = [];
  var t = b;
  while (previous[t] != undefined) {
    s.splice(0,0,t);
    t = previous[t];
  }
  return s.length;
}

function setupKeyDistances() {
  for (var letterone in keymap){
    for (var lettertwo in keymap){
      var d = distancebetweenkeys(letterone, lettertwo);
      if (keydistancemap[letterone] == undefined)
        keydistancemap[letterone] = [];
      keydistancemap[letterone][lettertwo] = d;
    }
  }
}

function replace(fun){
  setupKeyDistances();
  var output = input;
  var hash = {};
  input = input.toString().split(/\W+/);
  for (i in input) {
    var originalword = input[i].replace(/[^A-Za-z]/g, '');
    var trimmed = input[i].toLowerCase().replace(/[^a-z]/g, '');
    if (trimmed.length == 0) continue;
    if (wordsbycharacter[trimmed.length].indexOf(trimmed) != -1) { 
      hash[originalword] = keepcase(originalword, trimmed);
      continue; 
    }

    var current = "", d = 0, min = 13,minstr = "";
    for (i in wordsbycharacter[trimmed.length]) {
      d = fun(trimmed, wordsbycharacter[trimmed.length][i]);
      if (d == 1) { minstr = wordsbycharacter[trimmed.length][i]; break; }
      if (d < min) { min = d; minstr = wordsbycharacter[trimmed.length][i]; }
    }

    var replacement = "";
    if (minstr == "")
      replacement = originalword;
    else
      replacement = keepcase(originalword, minstr);

    hash[originalword] = replacement;
  }
  
  for (var key in hash)
    output = output.replace(RegExp('\\b' + key + '\\b', 'g'), hash[key]);
  console.log(output);
}

function sr() {replace(keymapdistance);}

process.stdin.resume();
process.stdin.setEncoding('utf8');
process.stdin.on('data', function (chunk) {
  input += chunk;
});

process.stdin.on('end', sr);
