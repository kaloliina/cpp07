#include <iostream>
	#include <bits/stdc++.h>
template <typename T>
class Array
{
	private:
		T	*_arr;
		int	_size;

	public:
	Array()
	{
		_arr = nullptr;
		_size = 0;
	}
	Array(unsigned int n)
	{
		_arr = new T[n];
		_size = n;
	}

	Array(const Array& copy)
	{
		_arr = new T[copy._size];
		_size = copy._size;
		for (int i = 0; i < _size; i++)
		{
			_arr[i] = copy._arr[i];
		}
	}
	Array& operator=(const Array&src)
	{
		if (this != &src)
		{
			for (int i = 0; i < _size; i++)
			{
				_arr[i] = src._arr[i];
			}
		}
		return *this;
	}
	T operator[](int index) const //this one returns whatever is there
	{
		if (index < 0 || index >= _size)
		{
			throw std::exception();
		}
		return(_arr[index]);
	}
	T& operator[](int index) //this one modifies the actual par
	{
		if (index < 0 || index >= _size)
		{
			throw std::exception();
		}
		return(_arr[index]);
	}
	int size() const
	{
		return _size;
	}

};
