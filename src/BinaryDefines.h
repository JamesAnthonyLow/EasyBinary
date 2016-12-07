#ifndef BINARY_DEFINES_H
#define BINARY_DEFINES_H

#define B_0 0
#define B_1 1
//Binary numbers of width 1

#define B_00 0
#define B_01 1
#define B_10 2
#define B_11 3
//Binary numbers of width 2

#define B_000 0
#define B_001 1
#define B_010 2
#define B_011 3
#define B_100 4
#define B_101 5
#define B_110 6
#define B_111 7
//Binary numbers of width 3

#define B(binary) B_##binary

#endif
