#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	static const int k_init_sign_grade = 25;
	static const int k_init_exe_grade = 5;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &name);
	PresidentialPardonForm(const PresidentialPardonForm &other);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm &operator=(const PresidentialPardonForm &other);

	static const std::string getInitName();
	void execute(const Bureaucrat &bc) const;
};

#endif