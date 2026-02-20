#include "../include/iter.hpp"

template <typename T>
void increasethis(T& y)
{
	std::cout << "Before: " << y << std::endl;
	y++;
	std::cout << "After: " << y << std::endl;
}

template <typename T>
void printThis(const T& y)
{
	std::cout << "Before: " << y << std::endl;
	std::cout << "After: " << y << std::endl;
}

int main( void ) {
	const int arr[3] = { 0, 1, 2};
	::iter(arr, 3, printThis<int>);
	std::cout << "\n\n" << std::endl;
	int arr1[3] = { 0, 1, 2};
	::iter(arr1, 3, increasethis<int>);
}
