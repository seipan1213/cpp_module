#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include <string>

int main()
{
	{
		try
		{
			ShrubberyCreationForm hogeForm("HOGE TARGET");
			Bureaucrat user("hogaa", 42);
			user.executeForm(hogeForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
}