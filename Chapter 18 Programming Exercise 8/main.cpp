#include <iostream>
#include "linkedStackType.h"
#include "myStack.h"

using namespace std;

void dec_to_bin(int num) {
	linkedStackType<int> stack;
	while (num > 0) {
		int remainder = num % 2; 
		num = num / 2;
		stack.push(remainder);
	}
	cout << "Binary: ";
	while (!stack.isEmptyStack()) {
		int toBinary;
		toBinary = stack.top();
		stack.pop();
		cout << toBinary;
	}
	cout << endl;
}


int main()
{
	int num;
	cout << "Enter a decimal: ";
	cin >> num;
	dec_to_bin(num);

	system("pause");
	return 0;
}
