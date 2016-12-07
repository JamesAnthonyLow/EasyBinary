def def_bin_macro(width)
  str = "//Binary numbers of width #{width}\n"
  for i in (0...2**width) do
    str += "#define B_%0*d %d\n" % [width, i.to_s(2), i] 
  end
  str
end

File.open("BinaryDefines.h", "w+") do |f|
  f.puts "#ifndef BINARY_DEFINES_H
#define BINARY_DEFINES_H"
  f.print "\n"
  for i in 1..(ARGV[0].to_i || 16) do
    f.print "#{def_bin_macro(i)}\n"
  end
  f.print "#define B(binary) B_##binary

#endif"
end
