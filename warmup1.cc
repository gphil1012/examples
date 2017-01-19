#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // define varibles
    float inputA;
    float inputB;
    float inputC;
    float inputTax = 1.07;

    int   resultCents;

    float result;

    // take inputs
    cin >> inputA;
    cin >> inputB;
    cin >> inputC;

    // do computation

    // comput the sum of inputA, B, and C
    // store sum in result variable

    result = inputA + inputB + inputC;

	resultCents = result * 100;

	result = round(resultCents*inputTax)/100;

    // print output
    cout << '\n'
    << result << '\n';
}
