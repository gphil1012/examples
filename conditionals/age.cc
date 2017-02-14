#include <iostream>

using namespace std;

int main(){
	// while(<condition>){
	//     repeated code
	// }

	// int   0 = false, !0 = true
	// float 0.0 = false, !0.0 = true
	// bool  true = true, false = false
	// char  no idea probably \00

	int age = 0;

	while(age <= 25){
		if(age < 18){
			cout << age << ": Underage\n";
		}
		else if(age < 21){
			cout << age << ": Can't Drink\n";
		}
		else if(age < 25){
			cout << age << ": Uh Oh\n";
		}
		else {
			cout << age << ": Guess I'll Die Now\n";
		}
		age++;
	}
	return 0;
}
