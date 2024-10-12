#ifndef BASE_SOLO_LINKED_LIST
#define BASE_SOLO_LINKED_LIST

#include "solo_linked_list_node.h"
#include "base_operations.h"

template <typename T>
class BaseLinkedList abstract : public BaseAddingOperations<T>, public BaseRemovingOperations<T>
{
public:
	//Getters and setters
	virtual void setHead(SoloLinkedListNode<T>* head) = 0;
	virtual void setTail(SoloLinkedListNode<T>* tail) = 0;
	virtual SoloLinkedListNode<T>* getHead() = 0;
	virtual SoloLinkedListNode<T>* getTail() = 0;

	//Methods
	virtual void print() = 0;
};

#endif
