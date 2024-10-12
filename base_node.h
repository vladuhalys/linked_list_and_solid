#ifndef BASE_NODE
#define BASE_NODE

template <typename T>
class INext abstract
{
public:
	BaseNode* getNext() = 0;
	void setNext(BaseNode* next) = 0;
};

template <typename T>
class IPrev abstract
{
public:
	BaseNode* getPrev() = 0;
	void setPrev(BaseNode* next) = 0;
};

template <typename T>
class BaseNode abstract
{
public:
	BaseNode() = default;
	virtual ~BaseNode() = default;
	void setValue(T value) = 0;
	T getValue() = 0;
};

#endif // !BASE_NODE

