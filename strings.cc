#include <iostream>

using namespace std;

int main(){
    //variable declarations
    char yourNameHere[30];
    int  AgeNumber;
    char Birthday[32];

    //user input
    cout << "What is your name?\n";
    cin.getline(yourNameHere, sizeof(yourNameHere));
    cout << "What is your age?\n";
    cin  >> AgeNumber;
    cin.get();
    cout << "What is your birthday?\n";
    cin.getline(Birthday, sizeof(Birthday));

    //output
    cout << "Hello, " << yourNameHere << 
            ", you are " << AgeNumber <<
            ", and your birthday is  " << Birthday
<<"\n";
    if(AgeNumber >= 21){
       cout << "Congrats, you can get shit hammered.\n";
        
    }
    else{
       cout << "Buy a fake id.\n";
 
    }
    return 0;

}
