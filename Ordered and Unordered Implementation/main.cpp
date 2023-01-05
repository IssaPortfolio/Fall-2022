#include "orderedLinkedList.h"
#include "unorderedLinkedList.h"
#include <iostream>
using namespace std;


int main() {
	cout << "ordered linked list:" << endl;
	orderedLinkedList<int> list1;
	int num;
	cout << "Enter numbers ending with -999." << endl;
	cin >> num;

	while (num != -999)
	{
		list1.insert(num);
		cin >> num;
	}

	if (list1.search(1) == true)
		cout << "1 is in list1" << endl;
	else
		cout << "1 is not in list1" << endl;

	cout << "Line 23: Enter the number to be deleted: ";
	cin >> num;
	cout << endl;

	list1.deleteNode(num);


	if (list1.isEmptyList() == true)
		cout << "list1 is empty" << endl;
	else
		cout << "list1 is not empty" << endl;

	cout << endl;
	cout << "list1: ";
	list1.print();
	cout << endl;
	cout << "list1 length: " << list1.length() << endl;
	cout << "front: " << list1.front() << endl;
	cout << "back: " << list1.back() << endl;


	cout << endl << endl << endl << "unordered linked list: " << endl;
	unorderedLinkedList<int> myList;

	myList.insertFirst(34);

	myList.insertFirst(65);

	myList.insertFirst(18);

	myList.insertLast(39);

	myList.insertFirst(27);

	myList.insertFirst(89);

	myList.insertFirst(12);


	cout << "The elements in the list: ";
	myList.print();

	cout << "\n\n";

    system("pause");
    return 0;
}

