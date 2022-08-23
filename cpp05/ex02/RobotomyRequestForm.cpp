#include "RobotomyRequestForm.hpp"
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm() : Form(this->getInitName(), k_init_sign_grade, k_init_exe_grade, "target")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
	: Form(this->getInitName(), k_init_sign_grade, k_init_exe_grade, target)
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

const std::string RobotomyRequestForm::getInitName()
{
	return "robotomy request";
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const
{
	guardExecute(executor);

	std::cout << "Drilllllll...." << std::endl;

	std::srand(std::time(NULL));
	int rand = std::rand();
	if (rand % 2 == 0)
	{
		std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
	}
	else
	{
		std::cout << this->getTarget() << " has been robotomized unsuccessfully" << std::endl;
	}
}