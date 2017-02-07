#include <iostream>

using namespace std;

int		dabs(int a);
float	dabs(float a);
double	dabs(double a);

int main()
{

	int		intA;
	float   floatA;
	double	doubleA;

	cout << "gimme an int " << '\n';
	cin  >> intA;

	cout << "the absolute value is "
		 << dabs(intA) << '\n';

	cout << "gimme a float " << '\n';
	cin  >> floatA;

	cout << "the absolute value is "
		 << dabs(floatA) << '\n';

	cout << "gimme a double " << '\n';
	cin  >> doubleA;

	cout << "the absolute value is "
		 << dabs(doubleA) << '\n';

	return 0;
}

int dabs(int a)
{
	int intA = a;

	if(intA < 0)
	{
	intA = a * -1;
	}

return intA;
}

float dabs(float a)
{
	float floatA = a;

	if(floatA < 0)
	{
	floatA = a * -1;
	}

return floatA;

}

double dabs(double a)
{
	double doubleA = a;

	if(doubleA < 0)
	{

	doubleA = a * -1;

	}

return doubleA;
}


