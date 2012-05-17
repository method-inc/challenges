exec = require('child_process').exec
bin = require('path').normalize(__dirname + '/../wordchains')
wordchains = (args, done) ->
  exec [bin, args].join(' '), done

describe 'wordchains', ->

  it 'should display help if bad params are given', (done) ->
    msg = ['Usage:', bin, 'words first_word second_word\n'].join(' ')
    wordchains '', (err, stdout, stderr) ->
      stderr.should.eql msg
      done()

  it 'should display an error if both words are not the same length', (done) ->
    wordchains 'words big small', (err, stdout, stderr) ->
      stderr.should.eql 'Both words must be the same length!\n'
      done()

  it 'should display an error if a chain is not found', (done) ->
    wordchains 'words package copying', (err, stdout, stderr) ->
      stderr.should.eql '[Error: No chain found!]\n'
      done()

  it 'should display the path if a chain can be found', (done) ->
    wordchains 'words hot cat', (err, stdout, stderr) ->
      stdout.should.eql 'hot\ncot\ncat\n'
      done()
