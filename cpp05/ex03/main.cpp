#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <string>

int main()
{
	{
		try
		{
			Intern someRandomIntern;
			Form *rrf;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");

			std::cout << *rrf << std::endl;

			delete rrf;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}