#include <iostream>
#include "queueType.h"
using namespace std;


int main() {

	queueType<int> queue;

	int x, y;
	queue.initializeQueue();
	x = 20;
	y = 35;


	queue.addQueue(x);
	queue.addQueue(y);

	x = queue.front();

	queue.deleteQueue();

	queue.addQueue(x + 7);
	queue.addQueue(78);
	queue.addQueue(x);
	queue.addQueue(y - 6);

	cout << "Queue Elements: ";
	while (!queue.isEmptyQueue()) {
		cout << queue.front() << " ";
		queue.deleteQueue();
	}
	cout << endl;






	queue.initializeQueue();
	x = 20;
	y = 35;

	queue.addQueue(x);
	queue.addQueue(y);

	x = queue.front();

	queue.deleteQueue();

	queue.addQueue(x + 7);
	queue.addQueue(78);
	queue.addQueue(x);
	queue.addQueue(y - 6);

	int index;
	cout << "which index, starting from 1 and up, do you want to move to the front?: ";
	cin >> index;
	queue.moveNthFront(index);
	cout << "Queue Elements: ";
	while (!queue.isEmptyQueue()) {
		cout << queue.front() << " ";
		queue.deleteQueue();
	}
	cout << endl;
	

	cout << endl;
	system("pause");
	return 0;
}
