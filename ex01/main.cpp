#include "iter.hpp"

template <typename T>
void increasethis(T& y)
{
	std::cout << "Before: " << y << std::endl;
	y++;
	std::cout << "After: " << y << std::endl;
}

//you need to define which data type is coming...
int main( void ) {
int arr[3] = { 0, 1, 2};
::iter(arr, 3, increasethis<int>);
}
