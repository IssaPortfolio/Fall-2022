#include <iostream>
#include "linkedStackType.h"
#include "myStack.h"

using namespace std;

//Function to test the copy constructor
void testCopy(linkedStackType<int> OStack)
{
	cout << "Stack in the function testCopy:" << endl;
	while (!OStack.isEmptyStack())
	{
		cout << OStack.top() << endl;
		OStack.pop();
	}
}


int main()
{
	linkedStackType<int> stack;
	linkedStackType<int> otherStack;
	linkedStackType<int> copyStack;
	linkedStackType<int> newStack;
	linkedStackType<int> originalStack;
	linkedStackType<int> dummyStack;
	originalStack.initializeStack();
	originalStack.push(85);
	originalStack.push(28);
	originalStack.push(56);
	stack = originalStack;
	copyStack = originalStack; //copy stack into copyStack
	cout << "The elements of copyStack: ";
	while (!copyStack.isEmptyStack()) //print copyStack
	{
		cout << copyStack.top() << " ";
		copyStack.pop();
	}
	cout << endl;
	copyStack = originalStack;

	cout << "and stack elements are: ";
	while (!stack.isEmptyStack()) {
		cout << stack.top() << " ";
		stack.pop();
	}
	cout << endl;
	stack = originalStack;

	if (copyStack == stack) {
		cout << "copyStack object elements and position are the same as stack object." << endl;
	}
	else {
		cout << "copyStack object elements and position are NOT the same as stack object." << endl;
	}
	stack = originalStack;
	stack.push(10);
	cout << "Pushing element 10 to stack object" << endl;
	cout << "The elements of copyStack: ";
	while (!stack.isEmptyStack()) //print copyStack
	{
		cout << stack.top() << " ";
		stack.pop();
	}
	cout << endl;
	stack = originalStack;
	stack.push(10);

	copyStack = originalStack;
	cout << "and stack elements are: ";
	while (!copyStack.isEmptyStack()) {
		cout << copyStack.top() << " ";
		copyStack.pop();
	}
	copyStack = originalStack;

	cout << endl;
	if (copyStack == stack) {
		cout << "copyStack object elements and position are the same as stack object." << endl;
	}
	else {
		cout << "copyStack object elements and position are NOT the same as stack object." << endl;
	}

	cout << "\n\n" << endl;






	//Add elements into stack
	stack.push(28);
	stack.push(94);
	stack.push(37);
	//Use the assignment operator to copy the elements
	//of stack into newStack
	newStack = stack;
	cout << "After the assignment operator, newStack: "
		<< endl;
	//Output the elements of newStack
	while (!newStack.isEmptyStack())
	{
		cout << newStack.top() << endl;
		newStack.pop();
	}
	//Use the assignment operator to copy the elements
 //of stack into otherStack
	otherStack = stack;
	cout << "Testing the copy constructor." << endl;
	testCopy(otherStack);
	cout << "After the copy constructor, otherStack: " << endl;
	while (!otherStack.isEmptyStack())
	{
		cout << otherStack.top() << endl;
		otherStack.pop();
	}

	cout << "\n\n" << endl;


	stackType<int> stack1;
	stack1.push(32);
	stack1.push(53);
	stack1.push(75);
	cout << "The elements of stack1: " << endl;
	while (!stack1.isEmptyStack())
	{
		cout << stack1.top() << endl;
		stack1.pop();
	}
	stack1.push(32);
	stack1.push(53);
	stack1.push(75);

	stackType<int> stack2;
	stack2.push(3122);
	stack2.push(543);
	stack2.push(755);
	stack2.push(332);
	stack2.push(553);
	stack2.push(745);

	stack1.reverseStack(stack2);
	cout << "The elements of stack2: " << endl;
	while (!stack2.isEmptyStack())
	{
		cout << stack2.top() << endl;
		stack2.pop();
	}

	cout << "\n\n" << endl;

	linkedStackType<int> linkedStackType1;
	linkedStackType1.push(32);
	linkedStackType1.push(53);
	linkedStackType1.push(75);
	cout << "The elements of linkedStackType1: " << endl;
	while (!linkedStackType1.isEmptyStack())
	{
		cout << linkedStackType1.top() << endl;
		linkedStackType1.pop();
	}
	linkedStackType1.push(32);
	linkedStackType1.push(53);
	linkedStackType1.push(75);

	linkedStackType<int> linkedStackType2;
	linkedStackType2.push(3122);
	linkedStackType2.push(543);
	linkedStackType2.push(755);
	linkedStackType2.push(332);
	linkedStackType2.push(553);
	linkedStackType2.push(745);

	linkedStackType1.reverseStack(linkedStackType2);
	cout << "The elements of linkedStackType2: " << endl;
	while (!linkedStackType2.isEmptyStack())
	{
		cout << linkedStackType2.top() << endl;
		linkedStackType2.pop();
	}
	system("pause");
	return 0;

}
