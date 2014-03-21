#!/usr/bin/env rake
require "bundler/gem_tasks"

def extension_dir
  Dir.chdir "ext/rubinius/melbourne" do
    yield
  end
end

def spec_ruby_version
  ".spec_ruby_version"
end

namespace :spec do
  desc "Clean the parser extension"
  task :clean do
    extension_dir do
      unless File.exist? spec_ruby_version and
             File.read(spec_ruby_version) == RUBY_DESCRIPTION
        sh "make distclean" if File.exist? "Makefile"
        File.open(spec_ruby_version, "w") { |f| f.write RUBY_DESCRIPTION }
      end
    end
  end

  desc "Build the parser extension"
  task :build do
    extension_dir do
      ruby "-v extconf.rb"
      ruby "-e 'system %[make && make install]'"
    end
  end
end

desc "Run the specs"
task :spec => %w[spec:clean spec:build] do
  sh "mspec -r spec/spec_helper spec"
end

task :default => :spec
