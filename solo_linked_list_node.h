#ifndef SOLO_NODE
#define SOLO_NODE

#include "base_solo_linked_list_node.h"


template <typename T>
class SoloLinkedListNode : public BaseSoloLinkedListNode<T>
{
private:
	T _value;
	SoloLinkedListNode<T>* _next = nullptr;
public:
	SoloLinkedListNode()
	{
		this->_value = T();
		this->_next = nullptr;
	}
	SoloLinkedListNode(T value)
	{
		this->_value = value;
		this->_next = nullptr;
	}
	SoloLinkedListNode(T value, SoloLinkedListNode<T>* next)
	{
		this->_value = value;
		this->_next = next;
	}
	virtual ~SoloLinkedListNode()
	{
		if (this->_next != nullptr)
		{
			delete this->_next;
		}
	}
	T getValue() const override
	{
		return this->getValue();
	}
	void setValue(T value) override
	{
		this->setValue(value);
	}
	SoloLinkedListNode<T>* getNext() const override
	{
		return this->getNext();
	}
	void setNext(SoloLinkedListNode<T>* next)
	{
		this->setNext(next);
	}
	void print() const
	{
		std::cout << this->getValue() << std::endl;
	}
};


#endif // !SOLO_NODE

