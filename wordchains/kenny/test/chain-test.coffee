Chain = require '../lib/chain'

describe 'Chain', ->
  it 'should return just the two words if they are the same', ->
    chain = new Chain('Fig', 'FIG')
    chain.links.should.eql ['fig', 'fig']

  it 'should return just two words if there is only one letter different', ->
    chain = new Chain('Fig', 'BIG')
    chain.links.should.eql ['fig', 'big']

  it 'should be able to solve when the words differ by two letters', ->
    chain = new Chain('Fig', 'BAG', ['big'])
    chain.links.should.eql ['fig', 'big', 'bag']

  it 'should be able to solve when the words differ by three letters', ->
    chain = new Chain('Fig', 'BAT', ['bag', 'big'])
    chain.links.should.eql ['fig', 'big', 'bag', 'bat']

  it 'should throw an exception if a chain can not be made', ->
    chain = new Chain('fire', 'dogs')
    (-> chain.links).should.throw('No chain found!')

  it 'should throw an exception if two words are not provided', ->
    (-> new Chain()).should.throw('Two words are required!')
