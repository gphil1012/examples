#include <iostream>

using namespace std;

void sort3(int list[], int length); // signature of function
// signature of function consists of return type,
// the name of the function, and parameters
// parameters are variables that get passed in 
// the type of the parameters(int, or bool or char)
void printList(int list[], int length);
void swap(int list[], int index1, int index2);

int main()
{
	const int LENGTH = 3;
	int listToSort[] = {4, 2, 8};

	cout << "before\n";
	printList(listToSort, LENGTH);

	sort3(listToSort, LENGTH);

	cout << "after\n";
	printList(listToSort, LENGTH);

return 0;
}

void printList(int list[], int length)
{
	for(int i = 0; i < length; i ++)
	{

		cout << list[i] << '\n';

	}
	return;
}

void sort3(int list[], int length)
{
	for(int j = 0; j < length; j++)
	{
		for(int i = 0 ; i < length-1; i++)
		{
			if(list[i] > list[i+1])
			{
				swap(list, i, i+1);
			}

		}
	}
	return;
}

void swap(int list[],int i,int j)
{
	int newVar = list[i];
	list[i] = list[j];
	list[j] = newVar;

	return;
}


// a computer can only do 1 comparison between
// 2 values at a time
// indexes is synonymous with "addresses"
