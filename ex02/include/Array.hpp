#include <iostream>

template <typename T>
class Array
{
	private:
		T *arr;
	public:
	Array();
	Array(unsigned int n)
	{
		arr = new T[n];
	}
	Array(const Array& copy)
	{
		for (int i = 0; i < copy.arr.size(); i++)
		{
			arr[i] = copy.arr[i];
		}
	}
	Array& operator=(const Array&src)
	{
		if (this != &src)
		{
			for (int i = 0; i < src.arr.size(); i++)
			{
				arr[i] = new T;
			}
		}
		return *this;
	}
	T operator[](int index) const //this one returns whatever is there
	{
		if (index < 0 || index > size())
		{
			throw std::exception();

		}
		return(arr[index]);
	}
	T& operator[](int index) //this one modifies the actual par
	{
		if (index < 0 || index > size())
		{
			throw std::exception();

		}
		return(arr[index]);
	}
	int size() const
	{
		return arr->size();
	}

};
