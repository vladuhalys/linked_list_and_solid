#ifndef BASE_SOLO_NODE
#define BASE_SOLO_NODE

#include "base_node.h"

template <typename T>
class BaseSoloLinkedListNode : public BaseNode<T>, public INext<T>
{
public:
	BaseSoloLinkedListNode() : BaseNode<T>(), INext<T>()
	{}
	BaseSoloLinkedListNode(T value) : BaseNode<T>(value), INext<T>(nullptr)
	{}
	BaseSoloLinkedListNode(T value, BaseSoloLinkedListNode<T>* next) : BaseNode<T>(value), INext<T>(next)
	{}

	virtual ~BaseSoloLinkedListNode()
	{
		if (this->_next != nullptr)
		{
			delete this->_next;
		}
	}
};


#endif // !BASE_SOLO_NODE

