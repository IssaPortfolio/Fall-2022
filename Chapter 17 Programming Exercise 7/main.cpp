#include <iostream> 
#include "orderedLinkedList.h" 
using namespace std;

int main() {
	orderedLinkedList<int> list1, list2;
	int num; 
	cout << "Line 8: Enter numbers ending with -999." << endl; 
	cin >> num; 

	while (num != -999) 
	{ 
		list1.insert(num); 
		cin >> num; 
	} 

	cout << endl; 
	cout << "Line 16: list1: "; 
	list1.print(); 
	cout << endl; 

	list2 = list1; 
	cout << "Line 20: list2: ";
	list2.print(); 
	cout << endl; 

	cout << "Line 23: Enter the number to be deleted: "; 
	cin >> num; 
	cout << endl; 

	list2.deleteNode(num); 
	cout << "Line 27: After deleting " << num << ", list2: " << endl; 
	list2.print();
	cout << endl; 

	orderedLinkedList<int> newList;
	newList.mergeLists(list1, list2);
	cout << "Merged list: " << endl;
	newList.print();
	cout << endl;

	system("pause");
	return 0; 
}