#------------------------------------------------------------------------------#
# This file is part of WordChains.

# WordChains is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.

# WordChains is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.

# You should have received a copy of the GNU Lesser General Public License
# along with WordChains.  If not, see <http://www.gnu.org/licenses/>.
#------------------------------------------------------------------------------#
require './extensions'

class Chain
  constructor: (first_word, second_word, words = []) ->
    throw new Error('Two words are required!') unless first_word and second_word
    [@first_word, @second_word] = (w.toLowerCase() for w in [first_word, second_word])
    @related = {}
    @wordLength = @first_word.length
    @wordRange = [0..(@wordLength - 1)]
    @addWord word for word in [@first_word, @second_word].concat(words)

  print: ->
    console.log link for link in @links

  addWord: (word) ->
    if word.length is @wordLength
      for w in (word.nulify(i) for i in @wordRange)
        @related[w] ?= []
        @related[w].push word

  relatedWords: (word) ->
    related = []
    for i in @wordRange
      nword = word.nulify(i)
      related.push w for w in @related[nword] if @related.hasOwnProperty nword
    related

  @property 'links', get: () ->
    links = [@first_word, @second_word]
    return links if @first_word is @second_word
    middleLinks = @findMiddleLinks()
    throw new Error('No chain found!') unless middleLinks
    links.insert 1, middleLinks

  findMiddleLinks: ->
    that = this
    current = [@first_word]
    path = {}
    path[@first_word] = no
    try
      until current.length is 0
        next = []
        for c in current
          for p in that.relatedWords(c)
            unless path.hasOwnProperty p
              path[p] = c
              throw 'found' if p is that.second_word
              next.push p
        current = next
      no
    catch e
      @buildChain(that.second_word, path)

  buildChain: (target, path) ->
    chain = []
    while target = path[target]
      chain.push target
    chain.reverse()
    chain.shift()
    chain

module.exports = Chain
