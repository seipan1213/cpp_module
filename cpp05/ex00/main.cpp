#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat hoge("hoge", 1);
		hoge--;
		hoge--;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}