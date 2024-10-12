#ifndef SOLO_NODE
#define SOLO_NODE

#include "base_solo_linked_list_node.h"


template <typename T>
class SoloLinkedListNode : public BaseSoloLinkedListNode<T>
{
public:
	SoloLinkedListNode() : BaseSoloLinkedListNode<T>()
	{
	}
	SoloLinkedListNode(T value) : BaseSoloLinkedListNode<T>(value)
	{
	}
	SoloLinkedListNode(T value, SoloLinkedListNode<T>* next) : BaseSoloLinkedListNode<T>(value, next)
	{
	}
	virtual ~SoloLinkedListNode()
	{}
	T getValue() const override
	{
		return this->getValue();
	}
	void setValue(T value) override
	{
		this->setValue(value);
	}
	BaseSoloLinkedListNode<T>* getNext() const override
	{
		return this->getNext();
	}
	void setNext(BaseSoloLinkedListNode<T>* next)
	{
		this->setNext(next);
	}
	void print() const
	{
		std::cout << this->getValue() << std::endl;
	}
};


#endif // !SOLO_NODE

