#include <iostream>

using namespace std;

int findmax(int a, int b, int c);

int main()
{

	int firstNumber;
	int secondNumber;
	int thirdNumber;

	cout << "first number is " << '\n';
	cin >> firstNumber;

	cout << "second number is " << '\n';
	cin >> secondNumber;

	cout << "third number is " << '\n';
	cin >> thirdNumber;

	cout << "the biggest number is "
		 << findmax(firstNumber, secondNumber, thirdNumber) << '\n';

	return 0;
}


int findmax(int a, int b, int c)
{
	int result = a;

	if(b > result)
	{
		result = b;
	}
	if (c > result)
	{
		result = c;
	}
	return result;
}



