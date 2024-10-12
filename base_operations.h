#ifndef BASE_OP
#define BASE_OP

template <typename T>
class BaseAddingOperations abstract
{
public:
	void push_back(T value) = 0;
	void push_front(T value) = 0;
	void insert(T value, size_t index) = 0;
};

template <typename T>
class BaseRemovingOperations abstract
{
public:
	void pop_front(T value) = 0;
	void pop_back(T value) = 0;
	void erase(size_t index) = 0;
	void remove(T value) = 0;
	void print() = 0;
};

#endif // !BASE_OP

