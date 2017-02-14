#include <iostream>

using namespace std;

int main(){
    float userInput;
    cout << "enter degrees Farenheit to convert to Celsius\n";
    cin  >> userInput;
    float output = (userInput - 32) * 5.0/9.0;
    cout << output << " c\n";
    return 0;
}
