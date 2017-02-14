Number Systems

A bit is the smallest unit of information
	a 1 or 0 / true or false (boolean)


byte - 8 bits (varies based on architecture)

// hexidecimal counting:
// 0123456789abcdef

base 2	-	01
base 8	-	01234567
base 10	-	0123456789
base 16	-	0123456789abcdef


binary	  decimal   hexadecimal
00000000 -  0  -    0x00

Nibble = 4 bits (half of a byte)
-----------------------------
binary	     decimal	      hex
0000	     00		          0x00
0001	     01	              0x01
0010         02               0x02
0011         03               0x03
0100         04               0x04
0101         05               0x05
0110         06               0x06
0111         07               0x07
1000         08               0x08
1001         09               0x09
1010         10               0x0A   // in hex, A = 10
1011		 11				  0x0B
1100		 12				  0x0C
1101         13				  0x0D
1110		 14				  0x0E
1111		 15				  0x0F
0000		 16				  0x10



// Memory in a computer works in a straight line
// Memory in a computer still exists if a byte is undefined


0xf3[0x43] // [location of variable a - 0xf3]

	// 0xf3 is the address of the memory (0x43)


int func(int a)
//0xf4 is the copy of 'a'(it's a copy of 0xf4)
// call by value  --- this is making a copy of the value

int func(int& a) //
// call by reference // 0fx3 is the address of 'a'
// '&' means 'reference of' - can read the function that way
// can also be int func(int & a)


