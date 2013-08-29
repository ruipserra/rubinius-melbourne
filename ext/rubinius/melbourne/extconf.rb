require 'rbconfig'

# Fake out Rubinius::ToolSet for bootstrapping
module Rubinius
  module ToolSet
    def self.current
      @current ||= Module.new
    end
  end
end

require File.expand_path("../../../../lib/rubinius/melbourne/version", __FILE__)

path = File.expand_path "../namespace.h", __FILE__
File.open path, "wb" do |f|
  version = Rubinius::ToolSet.current::TS::Melbourne::VERSION
  melbourne = "melbourne_#{version.gsub(/\./, "_")}"
  f.puts "#define MELBOURNE                 #{melbourne}"
  f.puts "#define MELBOURNE_FILE_TO_AST     #{melbourne}_file_to_ast"
  f.puts "#define MELBOURNE_STRING_TO_AST   #{melbourne}_string_to_ast"
end

unless File.exists? "Makefile" and
    File.mtime("Makefile") > File.mtime(__FILE__)
  cxx = ENV["CXX"] || RbConfig::CONFIG["CXX"] || "g++"
  cxxflags = ENV["CXXFLAGS"] || ENV["CPPFLAGS"] ||
             RbConfig::CONFIG["CXXFLAGS"] || RbConfig::CONFIG["CPPFLAGS"] || ""
  cxxflags << " -fPIC"

  incdirs = [
    RbConfig::CONFIG["arch_hdrdir"],
    RbConfig::CONFIG["topdir"],
    RbConfig::CONFIG["hdrdir"],
    RbConfig::CONFIG["rubyhdrdir"],
    RbConfig::CONFIG["srcdir"]
  ].compact.uniq

  archincdirs = []
  incdirs.each do |x|
    dir = "#{x}/#{RbConfig::CONFIG["arch"]}"
    archincdirs << dir if File.exists? dir
  end
  incdirs.concat archincdirs

  incflags = "-I. #{incdirs.map { |x| "-I#{x}" }.join(" ")}"
  objs = Dir["*.{c,cpp}"].map { |x| x.sub(/\.(c|cpp)$/, ".o") }.join(" ")

  ldsharedxx = ENV["LDSHAREDXX"] || RbConfig::CONFIG["LDSHAREDXX"] || "g++ -shared"
  dllib = "melbourne." + RbConfig::CONFIG["DLEXT"]
  dldflags = ENV["LDFLAGS"] || RbConfig::CONFIG["LDFLAGS"] || ""
  dldflags += " #{RbConfig::CONFIG["DLDFLAGS"]}"
  libpath = "-L. -L#{RbConfig::CONFIG["libdir"]}"
  libs = RbConfig::CONFIG["LIBS"]
  install_path = Dir.pwd.sub %r[/ext/rubinius/melbourne$], "/lib/rubinius/melbourne"

  File.open "Makefile", "wb" do |f|
    f.print <<-EOM
SHELL = /bin/sh

# V=0 quiet, V=1 verbose.  other values don't work.
V = 0
Q1 = $(V:1=)
Q = $(Q1:0=@)
ECHO1 = $(V:1=@:)
ECHO = $(ECHO1:0=@echo)

RM = rm -f
COPY = cp

CXX = #{cxx}
CXXFLAGS = #{cxxflags}
INCFLAGS = #{incflags}
OBJS = #{objs}

LDSHAREDXX = #{ldsharedxx}
DLLIB = #{dllib}
DLDFLAGS = #{dldflags}
LIBPATH = #{libpath}
LIBS = #{libs}

INSTALL_PATH = #{install_path}


.PHONY: all install

all:    $(DLLIB)

clean:
	-$(Q)$(RM) $(OBJS) $(DLLIB)

distclean:
	-$(Q)$(RM) $(OBJS) $(DLLIB) Makefile

install:
	-$(Q)$(COPY) $(DLLIB) $(INSTALL_PATH)


.SUFFIXES: .y .cpp .o

.y.cpp:
	$(ECHO) generating parser $(<)
	$(Q) bison -o $@ $<

.cpp.o:
	$(ECHO) compiling $(<)
	$(Q) $(CXX) $(CXXFLAGS) $(INCFLAGS) -o $@ -c $<

$(DLLIB): $(OBJS) Makefile
	$(ECHO) linking shared-object $(DLLIB)
	-$(Q)$(RM) $(@)
	$(Q) $(LDSHAREDXX) -o $@ $(OBJS) $(LIBPATH) $(DLDFLAGS) $(LIBS)

    EOM
  end
end
