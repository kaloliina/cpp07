#include "../include/Array.hpp"

int main( void )
{
	try
	{
		Array<std::string> arr(5);
		std::cout << arr[0] << std::endl;
		arr[0] = "hello";
		std::cout << arr[0] << std::endl;
		std::cout << arr[6] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
