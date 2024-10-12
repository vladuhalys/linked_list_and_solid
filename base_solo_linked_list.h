#ifndef BASE_SOLO_LINKED_LIST
#define BASE_SOLO_LINKED_LIST

#include "base_node.h"
#include "base_operations.h"

template <typename T>
class BaseLinkedList abstract : public BaseAddingOperations<T>, public BaseRemovingOperations<T>
{
protected:
	BaseNode<T>* head = nullptr;
	BaseNode<T>* tail = nullptr;
public:
	//Constructors and destructors
	BaseLinkedList() = default;
	virtual ~BaseLinkedList() = default;

	//Getters and setters
	void setHead(BaseNode<T>* head) = 0;
	void setTail(BaseNode<T>* tail) = 0;
	BaseNode<T>* getHead() = 0;
	BaseNode<T>* getTail() = 0;
};

#endif
