#include "../include/Array.hpp"

int main( void )
{
	try
	{
		Array<std::string> arr(4); // construction with unsigned int n as a parameter
		std::cout << arr[0] << std::endl;
		std::cout << arr[1] << std::endl; 
		std::cout << arr[2] << std::endl; 
		std::cout << arr[3] << std::endl;
		arr[0] = "a";
		arr[1] = "b";
		arr[2] = "c";
		arr[3] = "d";
		int *a = new int(); // brief prompt
		std::cout << *a << std::endl; // brief prompt
		Array<std::string> arr1(arr);
		Array<std::string> arr2(4); //what if its not the same size...?
		std::cout << "Copied: " << arr1[0] << arr1[1] << arr1[2] << arr1[3] << std::endl;
		arr2 = arr;
		std::cout << "Assigned: " << arr2[0] << arr2[1] << arr2[2] << arr2[3] << std::endl;
		arr[0] = "testing";
		arr1[1] = "testing copied";
		arr2[2] = "testing assigned";
		std::cout << "Original: " << arr[0] << arr[1] << arr[2] << arr[3] << std::endl; 
		std::cout << "Copied: " << arr1[0] << arr1[1] << arr1[2] << arr1[3] << std::endl;
		std::cout << "Assigned: " << arr2[0] << arr2[1] << arr2[2] << arr2[3] << std::endl;

		// arr[5] = "we should be out of bounds";
		// std::cout << "Testing accessing something out of bounds" << arr[5] << std::endl;

		std::cout << "Number of elements in the array: " << arr.size() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
