#include "unorderedLinkedList.h"
#include <iostream>
using namespace std;

template <class Type>
bool unorderedLinkedList<Type>::search(const Type& searchItem) const {
	nodeType<Type>* current;

	current = this->first;
	while (current != nullptr)
		if (current->info == searchItem)
			return true;
		else
			current = current->link;
	return false;

}

template <class Type>
void unorderedLinkedList<Type>::insertFirst(const Type& newItem) {
	nodeType<Type>* newNode;
	newNode = new nodeType<Type>;
	newNode->info = newItem;
	newNode->link = this->first;
	this->first = newNode;
	this->count++;
	if (this->last == nullptr)
		this->last = newNode;
}

template <class Type>
void unorderedLinkedList<Type>::insertLast(const Type& newItem)
{
	nodeType<Type>* newNode; 
	newNode = new nodeType<Type>; 
	newNode->info = newItem; 
	newNode->link = nullptr; 

	if (this->first == nullptr)

	{
		this->first = newNode;
		this->last = newNode;
		this->count++; 
	}
	else
	{
		this->last->link = newNode;
		this->last = newNode;
		
		this->count++;
	}
}

template <class Type>
void unorderedLinkedList<Type>::deleteNode(const Type& deleteItem)
{
	nodeType<Type>* current;
	nodeType<Type>* trailCurrent;
	bool found;
	if (this->first == nullptr)
		cout << "Cannot delete from an empty list." << endl;
	else
	{
		if (this->first->info == deleteItem)
		{
			current = this->first;
			this->first = this->first->link;
			this->count--;
			if (this->first == nullptr)
				this->last = nullptr;
			delete current;
		}
		else
		{
			found = false;
			trailCurrent = this->first;

			current = this->first->link;

			while (current != nullptr && !found)
			{
				if (current->info != deleteItem)
				{
					trailCurrent = current;
					current = current->link;
				}
				else
					found = true;
			}
			if (found)
			{
				trailCurrent->link = current->link;
				this->count--;
				if (this->last == current)

					this->last = trailCurrent;

				delete current;
			}
			else
				cout << "The item to be deleted is not in "
				<< "the list." << endl;
		}
	}
}

