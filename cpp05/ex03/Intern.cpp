#include "Intern.hpp"
#include <iostream>

Intern::Intern()
{
}

Intern::Intern(const Intern &other)
{
	*this = other;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &other)
{
	if (this == &other)
	{
	}

	return *this;
}

Form *Intern::makeForm(const std::string &form_name, const std::string &target)
{
	int form_index;
	Form *form;

	const std::string form_list[k_form_length] = {
		PresidentialPardonForm::getInitName(),
		RobotomyRequestForm::getInitName(),
		ShrubberyCreationForm::getInitName(),
	};

	for (form_index = 0; form_index < this->k_form_length + 1; form_index++)
	{
		if (form_index <= this->k_form_length && form_list[form_index] == form_name)
			break;
	}

	switch (form_index)
	{
	case 0:
		form = new PresidentialPardonForm(target);
		break;
	case 1:
		form = new RobotomyRequestForm(target);
		break;
	case 2:
		form = new ShrubberyCreationForm(target);
		break;
	default:
		throw NotFoundFormException("Not Found Form name");
	}

	std::cout << "Intern creates " + form_name << std::endl;
	return form;
}

Intern::NotFoundFormException::NotFoundFormException(const std::string msg) : invalid_argument(msg)
{
}