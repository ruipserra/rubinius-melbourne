#!/usr/bin/env rake
require "bundler/gem_tasks"

desc "Generate a unique namespace for C code"
task :namespace do
  require 'rubinius/toolset'
  require File.expand_path("../lib/rubinius/melbourne/version", __FILE__)

  path = File.expand_path "../ext/rubinius/melbourne/namespace.h", __FILE__
  File.open path, "wb" do |f|
    version = Rubinius::ToolSet.current::TS::Melbourne::VERSION
    melbourne = "melbourne_#{version.gsub(/\./, "_")}"
    f.puts "#define MELBOURNE                 #{melbourne}"
    f.puts "#define MELBOURNE_FILE_TO_AST     #{melbourne}_file_to_ast"
    f.puts "#define MELBOURNE_STRING_TO_AST   #{melbourne}_string_to_ast"
  end
end
