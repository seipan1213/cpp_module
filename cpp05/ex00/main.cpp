#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	{
		try
		{
			Bureaucrat hoge("hoge1++", 1);
			std::cout << hoge << std::endl;
			hoge++;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat hoge("++hoge1", 1);
			std::cout << hoge << std::endl;
			++hoge;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat hoge("hoge150--", 150);
			std::cout << hoge << std::endl;
			hoge--;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat hoge("--hoge150", 150);
			std::cout << hoge << std::endl;
			hoge--;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat hoge("hogeINTMAX", 2147483647);
			std::cout << hoge << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Bureaucrat hoge("hogeINTMIN", -2147483648);
			std::cout << hoge << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}