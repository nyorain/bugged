project('bugged', ['cpp'],
  license: 'BSL',
  version: '0.1.0',
  meson_version: '>=0.42',
  default_options: ['cpp_std=c++11'])

bugged_dep = declare_dependency(
	include_directories: include_directories('include'))

build_example = false
if build_example
	executable('example', 'example.cpp', dependencies: bugged_dep)
endif
