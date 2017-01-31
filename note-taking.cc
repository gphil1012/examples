#include <iostream> // std input/output
#include <fstream>  // file input/output
#include <string>   // allows us to use the string object
#include <vector>   // vector data structure

using namespace std;

string readFile();
void   writeFile(string s);

int main(){
	string inputString;

	cout << readFile();

	while(getline(cin, inputString))
	{
		writeFile(inputString);
	}
	return 0;
}

string readFile(){
	ifstream notes;           // input file stream
	string resultString;      // string of characters
	string nextLine;
	notes.open("notes.txt");  // open the file

	if(notes.is_open())
	{
		notes >> nextLine;
		while(!notes.eof())
		{
			resultString += nextLine;
			resultString += '\n';
			notes >> nextLine;
		}
		notes.close();
	}

	return resultString;
}


void writeFile(string s){
	ofstream notesOut;
	string tempString = readFile();

	notesOut.open("notes.txt");

	if(notesOut.is_open())
	{
		notesOut << tempString << '\n' << s;
		notesOut.close();
	}
	return;
}
