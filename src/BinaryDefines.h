#ifndef BINARY_DEFINES_H
#define BINARY_DEFINES_H

//Binary numbers of width 1
#define B_0 0
#define B_1 1

//Binary numbers of width 2
#define B_00 0
#define B_01 1
#define B_10 2
#define B_11 3

//Binary numbers of width 3
#define B_000 0
#define B_001 1
#define B_010 2
#define B_011 3
#define B_100 4
#define B_101 5
#define B_110 6
#define B_111 7

//Binary numbers of width 4
#define B_0000 0
#define B_0001 1
#define B_0010 2
#define B_0011 3
#define B_0100 4
#define B_0101 5
#define B_0110 6
#define B_0111 7
#define B_1000 8
#define B_1001 9
#define B_1010 10
#define B_1011 11
#define B_1100 12
#define B_1101 13
#define B_1110 14
#define B_1111 15

#define B(binary) B_##binary

#endif
