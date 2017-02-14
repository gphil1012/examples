#include <iostream>

using namespace std;

int main(){

	bool isSunny;
	bool isSnowing;
	const bool brownsWillWin = false;


	if(isSunny){
		cout << "it's sunny\n";
	}
	if(isSnowing){
		cout << "it's sunny\n";
	}
	if(isSunny && isSnowing){
		cout << "What the Fuck?\n";
	}

	return 0;
}
