require '../lib/extensions'

describe 'Extended', ->

  describe 'Objects', ->
    it 'should be able to define new properties', ->
      Obj = ->
      Obj.property 'stuff', get: ->
        7
      inst = new Obj()
      inst.stuff.should.eql 7

  describe 'Arrays', ->
    beforeEach ->
      @arr = [1, 2]

    it 'should be able to insert a single new item', ->
      @arr.insert(1, 3).should.eql [1, 3, 2]

    it 'should be able to insert multiple new items', ->
      @arr.insert(1, [3, 4]).should.eql [1, 3, 4, 2]
