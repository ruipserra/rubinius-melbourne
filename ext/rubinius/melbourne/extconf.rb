require 'rbconfig'
require 'rubinius/toolset'
require File.expand_path("../../../../lib/rubinius/melbourne/version", __FILE__)

File.open "namespace.h", "wb" do |f|
  version = Rubinius::ToolSet.current::TS::Melbourne::VERSION
  melbourne = "melbourne_#{version.gsub(/\./, "_")}"
  f.puts "#define MELBOURNE                 #{melbourne}"
  f.puts "#define MELBOURNE_FILE_TO_AST     #{melbourne}_file_to_ast"
  f.puts "#define MELBOURNE_STRING_TO_AST   #{melbourne}_string_to_ast"
end

if not File.exists? "Makefile" or
    File.mtime("Makefile.in") > File.mtime("Makefile")
  cxx = ENV["CXX"] || RbConfig::CONFIG["CXX"]
  cxxflags = ENV["CXXFLAGS"] || ENV["CPPFLAGS"] || RbConfig::CONFIG["CXXFLAGS"]
  incflags = "-I. -I#{RbConfig::CONFIG["rubyarchhdrdir"]} "
  incflags += "-I#{RbConfig::CONFIG["rubyhdrdir"]} "
  objs = Dir["*.{c,cpp}"].map { |x| x.sub /\.(c|cpp)$/, ".o" }.join(" ")

  ldsharedxx = ENV["LDSHAREDXX"] || ENV["LDSHARED"] || RbConfig::CONFIG["LDSHAREDXX"]
  dllib = "melbourne." + RbConfig::CONFIG["DLEXT"]
  dldflags = ENV["LDFLAGS"] || RbConfig::CONFIG["LDFLAGS"] || ""
  dldflags += " #{RbConfig::CONFIG["DLDFLAGS"]}"
  libpath = "-L. -L#{RbConfig::CONFIG["libdir"]}"
  libs = RbConfig::CONFIG["LIBS"]

  template = IO.read "Makefile.in"

  File.open "Makefile", "wb" do |f|
    f.print template % [cxx, cxxflags, incflags, objs, ldsharedxx, dllib, dldflags, libpath, libs]
  end
end
