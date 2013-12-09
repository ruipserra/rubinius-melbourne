#!/usr/bin/env rake
require "bundler/gem_tasks"
require "redcard"

if RedCard.check :rubinius
  namespace :spec do
    desc "Build the parser extension"
    task :build do
      Dir.chdir "ext/rubinius/melbourne" do
        ruby "-v extconf.rb"
        ruby "-e 'system %[make && make install]'"
      end
    end

    desc "Load the perser into the Spec ToolSet"
    task :toolset do
      Rubinius::ToolSet.start
      require "rubinius/melbourne"
      Rubinius::ToolSet.finish :spec
    end
  end

  dependencies = %w[spec:build spec:toolset]
else
  dependencies = []
end

desc "Run the specs"
task :spec => dependencies do
  sh "mspec spec"
end

task :default => :spec
