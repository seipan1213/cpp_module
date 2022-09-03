#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main()
{
	try
	{
		std::vector<int> v;
		for (int i = 0; i < 10; i++)
		{
			v.push_back(i);
		}
		v.push_back(100);
		std::vector<int>::iterator it1 = easyfind(v, 1);
		std::vector<int>::iterator it2 = easyfind(v, 2);
		std::vector<int>::iterator it3 = easyfind(v, 100);
		std::cout << *it1 << std::endl;
		std::cout << *it2 << std::endl;
		std::cout << *it3 << std::endl;

		std::vector<int>::iterator it4 = easyfind(v, 10);
		std::cout << *it4 << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}
