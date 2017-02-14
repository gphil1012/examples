#include <iostream>

using namespace std;

int main()
{
	float j = 0.3;

	for(int i = 7; i != 0; i -= 1)
	{
	cout << j << '\n';
	j -= 0.1;
	}

	return 0;
}

