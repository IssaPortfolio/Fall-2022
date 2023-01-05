#pragma once
#include "linkedListType.h"

template <class type>
class orderedLinkedList : public linkedListType<type>
{
public:
	bool search(const type&) const;

	void insert(const type&);

	void insertFirst(const type&);

	void insertLast(const type&);

	void deleteNode(const type&);

};