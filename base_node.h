#ifndef BASE_NODE
#define BASE_NODE

template <typename T>
class BaseNode abstract
{
public:
	BaseNode() = default;
	virtual ~BaseNode() = default;
	void setValue(T value) = 0;
	T getValue() = 0;
	BaseNode* getNext() = 0;
	void setNext(BaseNode* next) = 0;
};

#endif // !BASE_NODE

