#include "linkedListIterator.h"
using namespace std;

template <class Type>
Type linkedListIterator<Type>::operator * () {
	return current->info;
}
template <class Type>
linkedListIterator<Type> linkedListIterator<Type>::operator ++ () {
	current = current->info;
	return *this;
}
template <class Type>
bool linkedListIterator<Type>::operator == (const linkedListIterator<Type>& right) const {
	return (current == right.current);
}
template <class Type>
bool linkedListIterator<Type>::operator != (const linkedListIterator<Type>& right) const {
	return (current != right.current);
}
template <class Type>
linkedListIterator<Type>::linkedListIterator(nodeType<Type> *ptr) {
	current = ptr;
}
template <class Type>
linkedListIterator<Type>::linkedListIterator() {
	current = nullptr;
}
