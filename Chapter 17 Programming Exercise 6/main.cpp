#include "unorderedLinkedList.h"
#include <iostream>
using namespace std;

int main() {

	unorderedLinkedList<int> myList;

	unorderedLinkedList<int> otherList;

	myList.insertFirst(34);

	myList.insertFirst(65);

	myList.insertFirst(18);

	myList.insertLast(39);

	myList.insertFirst(27);

	myList.insertFirst(89);

	myList.insertFirst(12);


	cout << "The elements in the list: ";
	myList.print();


	int splitAt;
	cout << "\n\nEnter spliting node value: ";
	cin >> splitAt;
	myList.divideAt(otherList, splitAt);


	cout << "\n\nThe elements in the list: ";
	myList.print();


	cout << "\n\nThe elements in the other list: ";
	otherList.print();


	cout << "\n\n";

	system("pause");
	return 0;
}