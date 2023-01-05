#pragma once
#include "linkedListType.h"

template <class Type>
class unorderedLinkedList : public linkedListType<Type>
{
public:
	bool search(const Type&) const;

	void insertFirst(const Type&);

	void insertLast(const Type&);

	void deleteNode(const Type&);

};
