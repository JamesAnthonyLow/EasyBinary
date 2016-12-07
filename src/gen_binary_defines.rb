require 'pry'
def def_bin_macro(width, n)
  "#define B_%0*d %d\n" % [width, n.to_s(2), n]
end

def def_macros_of_width(width, i=0)
  return "" if i == 2**width
  def_bin_macro(width, i) + def_macros_of_width(width, i+1)
end

File.open("BinaryDefines.h", "w+") do |f|
  f.puts "#ifndef BINARY_DEFINES_H
#define BINARY_DEFINES_H"
  f.print "\n"
  f.print def_macros_of_width(1)
  f.print "\n"
  f.print "#define B(binary) B_##binary

#endif"
end
