#include <iostream>

using namespace std;

void sort3(int list[], int length);
void printList(int list[], int length);
void swap(int list[], int index1, int index2);


int main()
{
	const int LENGTH = 3;
	int listToSort[] = {7, 3, 2};

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
		for(int i = 0; i < length-1; i++)
		{
			if(list[i] > list[i+1])
			{
				swap(list, i, i+1);
			}
		}
	}
	return;
}

void swap(int list[], int i, int j)
{
	int newVar = list[i];
	list[i] = list[j];
	list[j] = newVar;
	return;
}




