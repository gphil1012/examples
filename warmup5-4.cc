#include <iostream>
#include <iomanip>

using namespace std;

// a progran to convert Celsius to Fahrenheit

int main()
{

	const int MAXCELSIUS = 60;
	const int STARTVAL = -10;
	const int STEPSIZE = 10;
	int celsius;
	double fahren;

	cout << "DEGREES    DEGREES\n"
		 << "CELSIUS    FAHRENHEIT\n"
		 << "------     ----------\n";

		 celsius = STARTVAL;

		 // set output formats for floating-point numbers only

		 cout << setiosflags(ios::showpoint) << setiosflags(ios::fixed)
		 	  << setprecision(2);

		while (celsius <= MAXCELSIUS)
		{
		 fahren = (9.0/5.0) * celsius + 32.0;
		 cout << setw(4) << celsius
		      << setw(13) << fahren << endl;
		 celsius = celsius + STEPSIZE;
		}

	return 0;
	}
