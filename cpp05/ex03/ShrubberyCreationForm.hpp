#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	static const int k_init_sign_grade = 145;
	static const int k_init_exe_grade = 137;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string &name);
	ShrubberyCreationForm(const ShrubberyCreationForm &other);
	virtual ~ShrubberyCreationForm();
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);

	static const std::string getInitName();
	void execute(const Bureaucrat &bc) const;
};

#endif