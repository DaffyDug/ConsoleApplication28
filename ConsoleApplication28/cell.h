#pragma once
template < typename T >
class cell
{
	T _data;
	cell<T> * address;
public:
	cell() {};
	cell(T d)
	{
		_data = d;
	}
	T getData()
	{
		return _data;
	}
	void setData(T d)
	{
		_data = d;
	}
	cell<T>* getAddres()
	{
		return address;
	}
	void SetAddres(cell<T>* a)
	{
		address = a;
	}
};

