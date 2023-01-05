#pragma once
template <class Type>
class stackADT
{
public:
	virtual void initializeStack() = 0;
	//Method to initialize the stack to an empty state.
	//Postcondition: Stack is empty.
	virtual bool isEmptyStack() const = 0;
	//Function to determine whether the stack is empty.
	//Postcondition: Returns true if the stack is empty,
	// otherwise returns false.
	virtual bool isFullStack() const = 0;
	virtual void push(const Type& newItem) = 0;
	virtual Type top() const = 0;
	virtual void pop() = 0;
};