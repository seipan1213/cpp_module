#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <iostream>

RobotomyRequestForm::RobotomyRequestForm() : Form("unknown", k_init_sign_grade, k_init_exe_grade, "target")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form("RobotomyRequestForm", k_init_sign_grade, k_init_exe_grade, target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other)
	: Form(other)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	Form::operator=(other);
	return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &bc) const
{
	guardExecute(bc);

	std::cout << "Drilllllll...." << std::endl;

	int rand = std::rand();
	if (rand % 2)
	{
		std::cout << this->getTarget() + " has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << this->getTarget() + " has been robotomized unsuccessfully" << std::endl;
	}
}