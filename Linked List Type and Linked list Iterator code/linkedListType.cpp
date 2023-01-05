#include "linkedListType.h"
#include <iostream>
using namespace std;

template <class Type>
void linkedListType<Type>::copyList (const linkedListType<Type>& otherList)
{
	nodeType<Type>* newNode; 
	nodeType<Type>* current; 
	if (first != nullptr) 
		destroyList();
	if (otherList.first == nullptr) 
	{
		first = nullptr;
		last = nullptr;
		count = 0;
	}
	else
	{
		current = otherList.first; 
		
		count = otherList.count;
		
		first = new nodeType<Type>;
		first->info = current->info; 
		first->link = nullptr; 
		
		last = first;
		current = current->link; 

		while (current != nullptr)
		{
			newNode = new nodeType<Type>; 
			newNode->info = current->info; 
			newNode->link = nullptr; 
	
			last->link = newNode;
			last = newNode; 
			
			current = current->link; 
			
		}
	}
}

template <class Type>
const linkedListType<Type>& linkedListType<Type>::operator= (const linkedListType<Type>& otherList)
{
	if (this != &otherList) 
	{
		copyList(otherList);
	}//end else
	return *this;
}

template <class Type>
void linkedListType<Type>::initializeList()
{
	destroyList(); 
}
template <class Type>
bool linkedListType<Type>::isEmptyList() const
{
	return (first == nullptr);
}

template <class Type>
void linkedListType<Type>::print() const
{
	nodeType<Type>* current; 
	current = first; 
	while (current != nullptr) 
	{
		cout << current->info << " ";
		current = current->link;
	}
}

template <class Type>
int linkedListType<Type>::length() const
{
	return count;
}

template <class Type>
void linkedListType<Type>::destroyList()
{
	nodeType<Type>* temp; 
	while (first != nullptr) 
	{
		temp = first; 
		first = first->link; 
		delete temp; 
	}
	last = nullptr; 

	count = 0;
}

template <class Type>
Type linkedListType<Type>::front() const
{
	assert(first != nullptr);
	return first->info; 
}

template <class Type>
Type linkedListType<Type>::back() const
{
	assert(last != nullptr);
	return last->info;
}



template <class Type>
linkedListIterator<Type> linkedListType<Type>::begin()
{
	linkedListIterator<Type> temp(first);
	return temp;
}

template <class Type>
linkedListIterator<Type> linkedListType<Type>::end()
{
	linkedListIterator<Type> temp(nullptr);
	return temp;
}


template <class Type>
linkedListType<Type>::linkedListType() 
{
	first = nullptr;
	last = nullptr;
	count = 0;
}

template <class Type>
linkedListType<Type>::linkedListType(const linkedListType<Type>& otherList) {
	first = nullptr;
	copyList(otherList);
}

template <class Type>
linkedListType<Type>::~linkedListType() 
{
	destroyList();
}
