#include "ShrubberyCreationForm.hpp"
#include <fstream>
#include <iostream>

ShrubberyCreationForm::ShrubberyCreationForm() : Form("unknown", k_init_sign_grade, k_init_exe_grade, "target")
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: Form("ShrubberyCreationForm", k_init_sign_grade, k_init_exe_grade, target)
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

void ShrubberyCreationForm::execute(const Bureaucrat &bc) const
{
	guardExecute(bc);
	std::ofstream ofs;
	ofs.open((this->getTarget() + "_shrubbery").c_str());
	ofs << "ShrubberyCreationForm" << std::endl;
	ofs << "|-- hoge" << std::endl;
	ofs << "`-- hogee" << std::endl;
	ofs << "    |-- hogeee" << std::endl;
	ofs << "    |-- hogeeee" << std::endl;

	std::cout << "ShrubberyCreationForm: " + this->getTarget() + " execute" << std::endl;
}