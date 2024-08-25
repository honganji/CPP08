#include "include/easyfind.hpp"
#include <cstdlib>

int main( void )
{
	std::vector<int> vec;
	srandom(time(NULL));
	for (size_t i = 0; i < 100; i++)
	{
		vec.push_back(random() % 100);
		if (vec.at(i) == 10)
			std::cout << "10 is added!" << std::endl;
	}
	std::cout << std::endl;
	try
	{
		std::cout << *(easyfind(vec, 10)) << " is found!" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		std::cout << *(easyfind(vec, 101)) << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return (0);
}
