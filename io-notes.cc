#include <stdio.h>

int main() {
	// variable declarations
	int maxBufferLen = 100; // this can be changed if needed
	char input[maxBufferLen];

	// read inputs
	//fgets(input, maxBufferLen, stdin);  // reads in 100 characters

	scanf("%[^\n]%*c", input);  // reads until newline
	/*
	The [] is the scanset character.
	[^\n] tells that while the input is not a newline
	('\n') take input.
	Then with the %*c it reads the newline character from the input buffer (which is not read),
	and the * indicates that this read in input is discarded (assignment suppression),
	as you do not need it, and this newline in the buffer does not
	create any problem for next inputs that you might take.
	*/

	// reference: http://stackoverflow.com/questions/6282198/reading-string-from-input-with-space-character

	printf("%s\n", input);
	return 0;
}
