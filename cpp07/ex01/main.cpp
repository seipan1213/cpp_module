#include "iter.hpp"
#include <iostream>

void inc(int &i)
{
	i++;
}

void inc(std::string &str)
{
	str += "_hoge";
}

int main()
{
	{
		int n = 5;
		int array[n] = {0, 1, 2, 3, 4};
		iter(array, n, print);
		std::cout << std::endl;
		iter(array, n, inc);
		iter(array, n, print);
		std::cout << std::endl;
	}
	{
		int n = 5;
		std::string array[n] = {"hoga", "hogb", "hogc", "hogd", "hoge"};
		iter(array, n, print);
		std::cout << std::endl;
		iter(array, n, inc);
		iter(array, n, print);
		std::cout << std::endl;
	}
}