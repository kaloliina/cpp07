#include <iostream>
/*templates in C++ are powerful tools for creating generic classes or functions.
This allows us to write code that works for any data type without rewriting it for each type.

Key features:
- Avoid code duplication by allowing one function or class to work with multiple data types, mainly
allowing generic functions and classes.
- Provide type safety, unlike using void *pointers or macros
- Can be specialized for specific data types when needed
*/

template <typename T>
void	swap(T& x, T& y)
{
	T z = x;
	x = y;
	y = z;
}

template <typename T>
T	min(T& x, T& y)
{
	if (x < y)
		return x;
	else if (y < x)
		return y;
	else
		return y;
}

template <typename T>
T	max(T& x, T& y)
{
	if (x > y)
		return x;
	else if (y > x)
		return y;
	else
		return y;
}
