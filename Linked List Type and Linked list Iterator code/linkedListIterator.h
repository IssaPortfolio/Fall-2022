#pragma once
#include "nodeType.h"

template <class Type>
class linkedListIterator {
private:
	nodeType<Type>* current; //pointer to point to the current
	//node in the linked list
public:

	Type operator*();

	linkedListIterator<Type> operator++();

	bool operator==(const linkedListIterator<Type>& right) const;

	bool operator!=(const linkedListIterator<Type>& right) const;

	linkedListIterator();
	linkedListIterator(nodeType<Type>* ptr);
};