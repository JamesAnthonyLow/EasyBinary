def def_bin_macro(width, n)
  "#define B_%0*d %d" % [width, n.to_s(2), n]
end

File.open("BinaryDefines.h", "w+") do |f|
  f.puts "#ifndef BINARY_DEFINES_H
#define BINARY_DEFINES_H"
  f.print "\n"
  for i in 0..2**0 do
    f.puts def_bin_macro(1, i)
  end
  f.print "\n"
  f.print "#define B(binary) B_##binary

#endif"
end
