#include "stackADT.h"
#include <iostream>
#include <cassert>
using namespace std;

//Definition of the node
template <class Type>
struct nodeType
{
	Type info;
	nodeType<Type>* link;
};
template <class Type>
class linkedStackType : public stackADT<Type>
{
public:
	const linkedStackType<Type>& operator=(const linkedStackType<Type>&);
	//Overload the assignment operator.
	const bool operator==(linkedStackType<Type>&);
	bool isEmptyStack() const;
	//Function to determine whether the stack is empty.
	//Postcondition: Returns true if the stack is empty;
	// otherwise returns false.
	bool isFullStack() const;
	//Function to determine whether the stack is full.
	//Postcondition: Returns false.
	void initializeStack();
	//Function to initialize the stack to an empty state.
	//Postcondition: The stack elements are removed;
	// stackTop = nullptr;
	void push(const Type& newItem);
	//Function to add newItem to the stack.
	//Precondition: The stack exists and is not full.
	//Postcondition: The stack is changed and newItem
	// is added to the top of the stack.
	Type top() const;
	void pop();
	linkedStackType();
	linkedStackType(const linkedStackType<Type>& otherStack);
	~linkedStackType();
private:
	nodeType<Type>* stackTop;
	void copyStack(const linkedStackType<Type>& otherStack);
};


template <class Type>
linkedStackType<Type>::linkedStackType() {
	stackTop = nullptr;
}

template <class Type>
bool linkedStackType<Type>::isEmptyStack() const {

	return (stackTop == nullptr);
} //end isEmptyStac

template <class Type>
bool linkedStackType<Type>::isFullStack() const
{
	return false;
} //end isFullStack

template <class Type>
void linkedStackType<Type>::initializeStack()
{
	nodeType<Type>* temp; //pointer to delete the node
	while (stackTop != nullptr) //while there are elements in
		//the stack
	{
		temp = stackTop; //set temp to point to the
		//current node
		stackTop = stackTop->link; //advance stackTop to the
		//next node
		delete temp; //deallocate memory occupied by temp
	}
} //end initializeStack

template <class Type>
void linkedStackType<Type>::push(const Type& newElement)
{
	nodeType<Type>* newNode; //pointer to create the new node
	newNode = new nodeType<Type>; //create the node
	newNode->info = newElement; //store newElement in the node
	newNode->link = stackTop; //insert newNode before stackTop
	stackTop = newNode; //set stackTop to point to the
	//top node
} //end push

template <class Type>
Type linkedStackType<Type>::top() const
{
	assert(stackTop != nullptr); //if stack is empty,
	//terminate the program
	return stackTop->info; //return the top element
}//end top

template <class Type>
void linkedStackType<Type>::pop()
{
	nodeType<Type>* temp; //pointer to deallocate memory
	if (stackTop != nullptr)
	{
		temp = stackTop; //set temp to point to the top node
		stackTop = stackTop->link; //advance stackTop to the
		//next node
		delete temp; //delete the top node
	}
	else
		cout << "Cannot remove from an empty stack." << endl;
}//end pop

template <class Type>
void linkedStackType<Type>::copyStack
(const linkedStackType<Type>& otherStack)
{
	nodeType<Type>* newNode, * current, * last;
	if (stackTop != nullptr) //if stack is nonempty, make it empty
		initializeStack();
	if (otherStack.stackTop == nullptr)
		stackTop = nullptr;
	else
	{
		current = otherStack.stackTop; //set current to point
		//to the stack to be copied
		//copy the stackTop element of the stack
		stackTop = new nodeType<Type>; //create the node
		stackTop->info = current->info; //copy the info
		stackTop->link = nullptr; //set the link field of the
		//node to nullptr
		last = stackTop; //set last to point to the node
		current = current->link; //set current to point to
		//the next node
		//copy the remaining stack
		while (current != nullptr)
		{
			newNode = new nodeType<Type>;
			newNode->info = current->info;
			newNode->link = nullptr;
			last->link = newNode;
			last = newNode;
			current = current->link;
		}//end while
	}//end else
} //end copyStack

//copy constructor
template <class Type>
linkedStackType<Type>::linkedStackType(
	const linkedStackType<Type>& otherStack)
{
	stackTop = nullptr;
	copyStack(otherStack);
}//end copy constructor

//destructor
template <class Type>
linkedStackType<Type>::~linkedStackType()
{
	initializeStack();
}//end destructor

template <class Type>
const linkedStackType<Type>& linkedStackType<Type>::operator= (const linkedStackType<Type>& otherStack) {
	if (this != &otherStack) //avoid self-copy
		copyStack(otherStack);
	return *this;
}//end operator=



template <class Type>
const bool linkedStackType<Type>::operator==(linkedStackType<Type>& otherStack) {
	while (!otherStack.isEmptyStack()) {
		if (this->top() != otherStack.top())
			return false;
		else {
			this->pop();
			otherStack.pop();
		}
	}
	return true;
}