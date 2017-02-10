#include <iostream>

using namespace std;

void swap(int &a, int &b);

int main()
{

	int valA, valB;

	cin >> valA;
    cin >> valB;

	cout << "A equals: " << valA << '\n';
	cout << "B equals: " << valB << '\n';

	swap(valA, valB);

	cout << "A now equals: " << valA << '\n';
	cout << "B now equals: " << valB << '\n';

	return 0;
}

void swap(int &a, int &b)
{

	int tempA, tempB;

	tempA = a;
	tempB = b;
	a = tempB;
	b = tempA;

	return;
}


