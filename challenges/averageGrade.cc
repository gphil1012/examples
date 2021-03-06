/*---------------------------------------------------------*/
/*                    Challenge                            */
/*                                                         */
// Write a program to calculate the final score in a class //
// The final score is determined from 10 assignments       //
// and 3 tests.                                            //
//                                                         //
// The first 2 tests are worth 50 points and the last      //
// is worth 100 points.                                    //
// Each hw assignment is worth 10 points.                  //
//                                                         //
// The input will be the scores of the 10 assignments      //
// followed by the scores of the 3 tests.                  //
// There will be no prompts printed from the program.      //
//                                                         //
// Sample Input:                                           //
// 10 6 3 6 7 3 5 7 8 4                                    //
// 50 40 76                                                //
//                                                         //
// Sample Output:                                          //
// 75%                                                     //
//                                                         //
/*---------------------------------------------------------*/

#include <iostream>

using namespace std;


int main(){
	// declare variables

	int hw1, hw2, hw3, hw4, hw5, hw6, hw7, hw8, hw9, hw10;
	int exam1, exam2;
	int finalexam;
	float final;

	// take input
	cin >> hw1 >> hw2 >> hw3 >> hw4 >> hw5 >> hw6 >> hw7 >> hw8 >> hw9 >> hw10;
    cin >> exam1 >> exam2;
	cin >> finalexam;

	// do computation
	final = (hw1 + hw2 + hw3 + hw4 + hw5 +
    hw6 + hw7 + hw8 + hw9 + hw10 +
    exam1 + exam2 + finalexam)/(300.0) * (100.0);


	// print output
	cout << final << "%\n";

	return 0;
}


// Hints:
// when taking only integers divided by <spaces> and \n characters, 
// you don't need to worry about using cin.get()
//
// integer division will truncate decimals, or remove anything after the decimal place
//
// The total possible points is 300
