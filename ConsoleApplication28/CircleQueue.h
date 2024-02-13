#pragma once
#include "cell.h"
template < typename T>
class CircleQueue
{
	cell<T>* first;
	cell<T>* last;
public:
	CircleQueue(T data)
	{
		first = new cell<T>(data);
		last = first;
	}
	void Push(T data)
	{
		cell<T>* newcell = new cell<T>(data);
		last->SetAddres(newcell);
		last = newcell;
	}
	T Pop()
	{
		T result = first->getData();
		first = first->getAddres();
		Push(result);
		return result;
	}

};

