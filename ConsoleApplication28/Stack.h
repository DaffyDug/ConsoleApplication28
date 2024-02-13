#pragma once
#include "cell.h"
template <typename T>
class Stack
{
public:
	cell<T>* last;
	Stack(T data)
	{
		last = new cell<T>(data);
	}

	void Push(T data)
	{
		cell<T>* newcell = new cell<T>(data);
		newcell->SetAddres(last);
		last = newcell;
	}
	T Pop()
	{
		T result = last->getData();
		last = last->getAddres();
		return result;
	}
};

