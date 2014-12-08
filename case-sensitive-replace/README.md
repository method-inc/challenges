# Case-Sensitive Replacement 
 
One of our engineers recently posed me an interesting problem I haven’t come
across before.

What’s the best way to do a Case-Sensitive replacement?
What’s the best way to do a Case-Insensitive replacement?

And to this question, I challenge you!

## Submissions

You can write your program in anything you want. The only rule is it can read
from stdin and write to stdout.

View the test cases in the `./test` file. The test cases are written in node and
expect the node executable to be installed and globally accessible.

## Run the tests

* `./test {your program`
* Example: `./test node dustans-solution.js`

This will call your program like the following:

```
$ # echo 'This is my Test Case' | node dustans-solution.js
```

An example template to do this in io.js/node.js:

``` javascript
process.stdin.resume();
process.stdin.setEncoding('utf8');

process.stdin.on('data', function(chunk) {
  if (chunk !== null) {
    solve(chunk);
  }
});

function solve(str) {
  console.log(str);
}
```

