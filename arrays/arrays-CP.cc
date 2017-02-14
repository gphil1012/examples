#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 265;
	int foo[5]; // array of integers
	int bar[2]; // another array of integers

	bar[0] = 100;
	foo[3] = 50;
	foo[0] = foo[3] + bar[0]
	return 0;
}

// fake memory land
[10]      - a
[265]     - b
[150]0    - foo
[]1
[]2
[50]3
[]4
[100]0 - bar
[]1
[]
[]  //invalid memory SIGSEGV - segfault (segmentation fault)
