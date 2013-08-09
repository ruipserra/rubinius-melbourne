require 'rbconfig'

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
  install_path = Dir.pwd.sub %r[/ext/rubinius/melbourne$], "/lib/rubinius/melbourne"

  template = IO.read "Makefile.in"

  File.open "Makefile", "wb" do |f|
    f.print template % [cxx, cxxflags, incflags, objs,
                        ldsharedxx, dllib, dldflags, libpath, libs, install_path]
  end
end
