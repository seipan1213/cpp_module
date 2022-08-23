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
	{
		try
		{
			Intern someRandomIntern;
			Form *rrf;
			rrf = someRandomIntern.makeForm("presidential pardon", "Bender");

			std::cout << *rrf << std::endl;

			delete rrf;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Intern someRandomIntern;
			Form *rrf;
			rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");

			std::cout << *rrf << std::endl;

			delete rrf;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	{
		try
		{
			Intern someRandomIntern;
			Form *rrf;
			rrf = someRandomIntern.makeForm("Hogeeee", "Bender");

			std::cout << *rrf << std::endl;

			delete rrf;
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}