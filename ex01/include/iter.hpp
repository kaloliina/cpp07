/*templates in C++ are powerful tools for creating generic classes or functions.
This allows us to write code that works for any data type without rewriting it for each type.

Key features:
- Avoid code duplication by allowing one function or class to work with multiple data types, mainly
allowing generic functions and classes.
- Provide type safety, unlike using void *pointers or macros
- Can be specialized for specific data types when needed
- Form the basis of containes and algorithms like vector, map and sort.
*/

#include <iostream>

//the function passed as the third parameter may take its argument
//by const reference or non-const reference...

// template <typename T>
// void increase(T& y)
// {
// y++;
// }

template <typename T, typename F>

void	iter(T& arr, const size_t length, F function)
{
	for (size_t i = 0; i < length; i++)
	{
		function(arr[i]);
	}
}
