#include "Array.hpp"
#include <iostream>
#include <string>
#include <iostream>

#define MAX_VAL 750
int main()
{
	{
		Array<int> numbers(MAX_VAL);
		int *mirror = new int[MAX_VAL];
		std::srand(time(NULL));
		for (int i = 0; i < MAX_VAL; i++)
		{
			const int value = std::rand();
			numbers[i] = value;
			mirror[i] = value;
		}
		// SCOPE
		{
			Array<int> tmp = numbers;
			Array<int> test(tmp);
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			if (mirror[i] != numbers[i])
			{
				std::cerr << "didn't save the same value!!" << std::endl;
				return 1;
			}
		}
		try
		{
			numbers[-2] = 0;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			numbers[MAX_VAL] = 0;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}

		for (int i = 0; i < MAX_VAL; i++)
		{
			numbers[i] = std::rand();
		}
		delete[] mirror; //
	}
	{
		Array<int> array(10);
		std::cout << array.size() << std::endl;
		for (size_t i = 0; i < array.size(); i++)
		{
			array[i] = i;
		}
		for (size_t i = 0; i < array.size(); i++)
		{
			std::cout << array[i] << " ";
		}
		std::cout << std::endl;
		std::cout << std::endl;

		Array<int> hoge(array);
		hoge[0] = 100;
		for (size_t i = 0; i < hoge.size(); i++)
		{
			std::cout << hoge[i] << " " << array[i] << std::endl;
		}
		std::cout << std::endl;

		hoge = array;
		for (size_t i = 0; i < hoge.size(); i++)
		{
			std::cout << hoge[i] << " ";
		}
		std::cout << std::endl;
		std::cout << std::endl;
	}
	{
		Array<std::string> array(10);
		std::cout << array.size() << std::endl;
		for (size_t i = 0; i < array.size(); i++)
		{
			array[i] = i + 'A';
		}
		for (size_t i = 0; i < array.size(); i++)
		{
			std::cout << array[i] << " ";
		}
		std::cout << std::endl;
		std::cout << std::endl;

		Array<std::string> hoge(array);
		hoge[0] = "100";
		for (size_t i = 0; i < hoge.size(); i++)
		{
			std::cout << hoge[i] << " " << array[i] << std::endl;
		}
		std::cout << std::endl;

		hoge = array;
		for (size_t i = 0; i < hoge.size(); i++)
		{
			std::cout << hoge[i] << " ";
		}
		std::cout << std::endl;
		std::cout << std::endl;
	}
	{
		Array<int> array;
		try
		{
			std::cout << &array << " " << array[0];
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << &array << " " << array[-2];
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << array.size() << std::endl;
	}
	{
		Array<int> array;
		try
		{
			std::cout << &array << " " << array.at(0);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		try
		{
			std::cout << &array << " " << array.at(-2);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << array.size() << std::endl;
	}
}