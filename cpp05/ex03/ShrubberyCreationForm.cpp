#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form(this->getInitName(), k_init_sign_grade, k_init_exe_grade, "target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: Form(this->getInitName(), k_init_sign_grade, k_init_exe_grade, target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: Form(other)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	Form::operator=(other);
	return *this;
}

const std::string ShrubberyCreationForm::getInitName()
{
	return "shrubbery creation";
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	guardExecute(executor);
	std::ofstream ofs;
	ofs.open((this->getTarget() + "_shrubbery").c_str());
	ofs << "ShrubberyCreationForm" << std::endl;
	ofs << "|-- hoge" << std::endl;
	ofs << "`-- hogee" << std::endl;
	ofs << "    |-- hogeee" << std::endl;
	ofs << "    |-- hogeeee" << std::endl;

	std::cout << "ShrubberyCreationForm: " << this->getTarget() << " execute" << std::endl;
}