#include <iostream>
#include "linkedQueue.h"
using namespace std;


int main() {

	linkedQueueType<int> queue;

	int x, y;
	queue.initializeQueue();
	x = 20;
	y = 35;

	cout << "Queue count: " << queue.queueCount() << endl;;
	queue.addQueue(x);
	queue.addQueue(y);
	cout << "Queue count after adding x and y: " << queue.queueCount() << endl;;
	x = queue.front();

	queue.deleteQueue();
	cout << "Queue count delete queue: " << queue.queueCount() << endl;;
	queue.addQueue(x + 7);
	queue.addQueue(78);
	queue.addQueue(x);
	queue.addQueue(y - 6);
	cout << "Queue count after adding 4 more time: " << queue.queueCount() << endl;;
	cout << "Queue Elements: ";
	while (!queue.isEmptyQueue()) {
		cout << queue.front() << " ";
		queue.deleteQueue();
	}
	cout << endl;

	cout << "Queue count: " << queue.queueCount() << endl;;
	cout << endl;
	system("pause");
	return 0;
}
