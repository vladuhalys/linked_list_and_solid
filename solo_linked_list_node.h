#ifndef SOLO_NODE
#define SOLO_NODE

#include <iostream>
using namespace std;

#include "base_node.h"

template <typename T>
class BaseSoloLinkedListNode : public BaseNode<T>, public INext<T>
{
public:
	BaseSoloLinkedListNode() : BaseNode<T>(), INext<T>()
	{}

	virtual ~BaseSoloLinkedListNode()
	{
		if (this->_next != nullptr)
		{
			delete this->_next;
		}
	}
	BaseSoloLinkedListNode(T value) : BaseNode<T>(value), INext<T>()
	{}
};

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
	virtual ~SoloLinkedListNode() {
		if (this->getNext() != nullptr)
		{
			delete this->getNext();
		}
	}
	T getValue() const override
	{
		return this->_value;
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
		std::cout << this->_value << std::endl;
	}
};


#endif // !SOLO_NODE

