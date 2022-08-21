#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <string>

int main()
{
	{
		try
		{
			Form hogeForm("Hoge", 42, 1);
			Bureaucrat user("hogaa", 42);
			user.signForm(hogeForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		try
		{
			Form hogeForm("Hoge", 24, 1);
			Bureaucrat user("hogaa", 42);
			user.signForm(hogeForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}