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
Object::property = (name, options = {}) ->
  @attrs ?= {}
  options['default'] ?= null
  @attrs[name] = options['default']
  options['get'] ?= () -> @attrs[name]
  options['set'] ?= (val) -> @attrs[name] = val
  Object.defineProperty this.prototype, name, options

Array::insert = (index, elements) ->
  Array::splice.apply(this, [index, 0].concat(elements)) if elements
  this

String::nulify = (index) ->
  [@slice(0, index), '\0', @slice(index + 1, @length)].join('')
