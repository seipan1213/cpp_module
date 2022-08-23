#include "PresidentialPardonForm.hpp"
#include <fstream>
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm() : Form(this->getInitName(), k_init_sign_grade, k_init_exe_grade, "target")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
	: Form(this->getInitName(), k_init_sign_grade, k_init_exe_grade, target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other)
	: Form(other)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	Form::operator=(other);
	return *this;
}

const std::string PresidentialPardonForm::getInitName()
{
	return "presidential pardon";
}

void PresidentialPardonForm::execute(const Bureaucrat &bc) const
{
	guardExecute(bc);
	std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}