#include <exception>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <string>

int main()
{
	{
		try
		{
			ShrubberyCreationForm hogeForm("HOGE TARGET");
			Bureaucrat user("hogaa", 145);
			user.executeForm(hogeForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		try
		{
			ShrubberyCreationForm hogeForm("HOGE TARGET");
			Bureaucrat user("hogaa", 145);
			user.signForm(hogeForm);
			user.executeForm(hogeForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		try
		{
			RobotomyRequestForm hogeForm("HOGE TARGET");
			Bureaucrat user("hogaa", 45);
			user.executeForm(hogeForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		try
		{
			RobotomyRequestForm hogeForm("HOGE TARGET");
			Bureaucrat user("hogaa", 45);
			user.signForm(hogeForm);
			user.executeForm(hogeForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		try
		{
			PresidentialPardonForm hogeForm("HOGE TARGET");
			Bureaucrat user("hogaa", 5);
			user.executeForm(hogeForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
	{
		try
		{
			PresidentialPardonForm hogeForm("HOGE TARGET");
			Bureaucrat user("hogaa", 5);
			user.signForm(hogeForm);
			user.executeForm(hogeForm);
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
		std::cout << std::endl;
	}
}