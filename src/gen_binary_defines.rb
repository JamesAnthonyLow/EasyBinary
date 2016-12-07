require 'pry'

def def_bin_macro(width, i=0)
  return "//Binary numbers of width #{width}\n" if i == 2**width
  "#define B_%0*d %d\n" % [width, i.to_s(2), i] + def_bin_macro(width, i+1)
end

File.open("BinaryDefines.h", "w+") do |f|
  f.puts "#ifndef BINARY_DEFINES_H
#define BINARY_DEFINES_H"
  f.print "\n"
  for i in 1..(ARGV[0].to_i || 2) do
    f.print "#{def_bin_macro(i)}\n"
  end
  f.print "#define B(binary) B_##binary

#endif"
end
