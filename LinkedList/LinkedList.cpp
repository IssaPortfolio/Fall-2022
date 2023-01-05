#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* link;
};

int main() {
	Node* head;

	Node* current;

	Node newNode;
	Node newNode2;

	newNode.data = 15;
	newNode.link = &newNode2;

	newNode2.data = 10;
	newNode2.link = nullptr;


	head = &newNode;
	current = head;

	while (current != nullptr) {
		cout << current->data << " ";
		current = current->link;

	}

	cout << endl;




	system("pause");
	return 0;
}