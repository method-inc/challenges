# Word Chains

## Language:

CoffeeScript only

##Requirements:

Given two words of equal length as command-line arguments, build a chain of words connecting the first to the second. Each word in the chain must be in the dictionary (attached: "words") and every step along the chain must change exactly one letter from the previous word. If a chain cannot be found, let the user know.

for example:

```shell
$ node solution.coffee words hot cat
hot
cot
cat
```

```shell
$ node solution.coffee words ninja coder
sorry, there is no chain between "ninja" and "coder"
```

There are several solutions to this problem; some are orders of magnitude faster than others. Again, for beer!
-H