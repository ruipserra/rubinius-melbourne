# -*- encoding: utf-8 -*-
require 'rubinius/toolset'
require './lib/rubinius/melbourne/version'

Gem::Specification.new do |gem|
  gem.authors       = ["Brian Shirai"]
  gem.email         = ["brixen@gmail.com"]
  gem.description   = %q{Ruby parser extracted from MRI.}
  gem.summary       = %q{Rubinius Ruby Parser.}
  gem.homepage      = "https://github.com/rubinius/rubinius-melbourne"
  gem.license       = "BSD"

  gem.files         = `git ls-files`.split($\)
  gem.executables   = gem.files.grep(%r{^bin/}).map{ |f| File.basename(f) }
  gem.extensions    = ["ext/rubinius/melbourne/extconf.rb"]
  gem.test_files    = gem.files.grep(%r{^(test|spec|features)/})
  gem.name          = "rubinius-melbourne"
  gem.require_paths = ["lib"]
  gem.version       = Rubinius::ToolSets.current::ToolSet::Melbourne::VERSION

  gem.add_runtime_dependency      "rubinius-toolset", "~> 2.0"

  gem.add_development_dependency  "mspec", "~> 1.5"
  gem.add_development_dependency  "rake",  "~> 10.0"
end
