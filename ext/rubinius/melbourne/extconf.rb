require 'rbconfig'

unless File.exists? "Makefile" and
    File.mtime("Makefile") > File.mtime(__FILE__)
  cxx = ENV["CXX"] || RbConfig::CONFIG["CXX"]
  cxxflags = ENV["CXXFLAGS"] || ENV["CPPFLAGS"] || RbConfig::CONFIG["CXXFLAGS"]
  incflags = "-I. -I#{RbConfig::CONFIG["rubyarchhdrdir"]} "
  incflags += "-I#{RbConfig::CONFIG["rubyhdrdir"]} "
  objs = Dir["*.{c,cpp}"].map { |x| x.sub(/\.(c|cpp)$/, ".o") }.join(" ")

  ldsharedxx = ENV["LDSHAREDXX"] || ENV["LDSHARED"] || RbConfig::CONFIG["LDSHAREDXX"]
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
	-$(Q)$(RM) $(OBJS) $(DLLIB) Makefile namespace.h

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
