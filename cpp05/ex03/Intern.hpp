#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

#include <string>

class Intern
{
private:
	static const int k_form_length = 3;

public:
	Intern();
	Intern(const Intern &other);
	~Intern();
	Intern &operator=(const Intern &other);
	Form *makeForm(const std::string &form_name, const std::string &target);

	class NotFoundFormException : public std::invalid_argument
	{
	public:
		NotFoundFormException(const std::string msg);
	};
};

#endif