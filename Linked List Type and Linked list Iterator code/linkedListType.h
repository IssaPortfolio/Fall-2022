#pragma once
#include "linkedListIterator.h"
#include "nodeType.h"

template <class Type>
class linkedListType {
protected:
    int count;
    nodeType<Type>* first;
    nodeType<Type>* last;

private:
    void copyList(const linkedListType<Type>&);

public:
    const linkedListType<Type>& operator = (const linkedListType<Type>&);
    void initializeList();
    bool isEmptyList() const;
    void print() const;
    int length() const;
    void destroyList();
    Type front() const;
    Type back() const;
    virtual bool search(const Type&) const = 0;
    virtual void insertFirst(const Type&) = 0;
    virtual void insertLast(const Type&) = 0;
    virtual void deleteNode(const Type&) = 0;
    linkedListIterator<Type> begin();
    linkedListIterator<Type> end();

    linkedListType();
    linkedListType(const linkedListType<Type>&);
    ~linkedListType();

};