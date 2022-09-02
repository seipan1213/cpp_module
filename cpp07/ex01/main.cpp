#include "iter.hpp"
#include <iostream>

void put_i(int i)
{
	std::cout << i + 100 << std::endl;
}

void put_str(std::string str)
{
	std::cout << str + "_XX" << std::endl;
}

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
		const int n = 5;
		int array[n] = {0, 1, 2, 3, 4};
		iter(array, n, print);
		std::cout << std::endl;
		iter(array, n, inc);
		iter(array, n, print);
		std::cout << std::endl;
		iter(array, n, put_i);
		std::cout << std::endl;
	}
	{
		const int n = 5;
		std::string array[n] = {"hoga", "hogb", "hogc", "hogd", "hoge"};
		iter(array, n, print);
		std::cout << std::endl;
		iter(array, n, inc);
		iter(array, n, print);
		std::cout << std::endl;
		iter(array, n, put_str);
		std::cout << std::endl;
	}
}