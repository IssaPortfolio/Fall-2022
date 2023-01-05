#include <iostream>
#include <string>
using namespace std;

// Similar to the book but modified
void selectionSort(string list[], int length) {
	int index;
	int smallestIndex;
	int location;
	string temp;
	for (index = 0; index < length - 1; index++)
	{
		//Step a
		smallestIndex = index;
		for (location = index + 1; location < length; location++)
			if (list[location] < list[smallestIndex])
				smallestIndex = location;
		//Step b
		temp = list[smallestIndex];
		list[smallestIndex] = list[index];
		list[index] = temp;
	}
}


void printArray(const string LIST[], const int LENGTH) {
	for (int i = 0; i < 10; i++) //Line 10
		cout << LIST[i] << endl;
}

int main() {

	const int ARRAY_SIZE = 6;
	string list[ARRAY_SIZE] = { "Sedan", "sedan", "Suv", "Truck", "Hatchback", "Bus" };
	selectionSort(list, ARRAY_SIZE);
	cout << "After sorting, the list elements are:" << endl; 
	printArray(list, ARRAY_SIZE);

	system("pause");
	return 0;
}