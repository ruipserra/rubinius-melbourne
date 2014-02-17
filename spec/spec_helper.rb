require 'rubinius/bridge'
require 'rubinius/toolset'

Rubinius::ToolSet.start
require "rubinius/melbourne"
require "rubinius/processor"
require "rubinius/compiler"
require "rubinius/ast"
Rubinius::ToolSet.finish :spec
