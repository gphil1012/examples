#include <iostream> // include external files for input and output
#include <cmath>

using namespace std;

int main(){  // defining a function called main which takes no inputs and returns an int
    // define varibles
    float inputA;  // declaring 3 float variables
    float inputB;
    float inputC;  // undefined

    float inputTax = 1.07;  // assigning a variable

    // more undefined variables
    int   resultCents;
    float result;

    // take inputs
    cin >> inputA;  // reading the value from cin (Console INput)
    cin >> inputB;  // storing that value as a float in previously
    cin >> inputC;  // declared variables

    // do computation

    // comput the sum of inputA, B, and C
    // store sum in result variable

    result = inputA + inputB + inputC;  // adding 3 floats storing in result

	resultCents = result * 100;  // multiplying result by 100 casting to an int

	result = round(resultCents*inputTax)/100;  // c++ casts on assignment

    // print output
    cout << '\n'
    << result << '\n';

    return 0; // program completed successfully
}  // end the main function
