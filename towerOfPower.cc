#include <iostream>

using namespace std;

int powerOfTwo(int n);

int main()
{

	for(int i = 0; i < 10; i ++)
	{
		cout << i << " -> " << powerOfTwo(i) << '\n';
	}
	return 0;

/*
2^0  -- 1
2^1 --  2
2^2 --  4
2^3 --  8
*/
}
int powerOfTwo(int n)
{

	int result = 1;

	for(int i = 0; i < n; i++)

		result = result * 2;

	return result;
}






