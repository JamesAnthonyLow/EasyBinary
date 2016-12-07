###EasyBinary.h

Many C compilers do not support a literal to declare binary numbers.  EasyBinary.h allows you to declare binary numbers with the inclusion of one simple, albeit long, header file.  The header file relies on simple macros that map the binary number to its decimal equivalent.  This has the advantage of being easy on the processor and not requiring an intermediary declaration which could complicate whatever the user is attempting.

Usage:
```C
B(1101); //Would be equivalent to the literal 13
```

There is a default BinaryDefines.h header in the ```src``` directory that goes up to 16 digits in width, but should you desire a file going up to any desired width the Makefile is run as follows:

```bash
make BinaryDefines WIDTH=<your width>  #The new file will appear in the root directory
```
