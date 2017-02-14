#include <iostream>
#include <climits>

using namespace std;

int main()
{

	unsigned int num = UINT_MAX - 10;

	for(int i = 0; i < 15; i ++)
	{
		cout << num << '\n';
		num++;
	}



	return 0;
}


