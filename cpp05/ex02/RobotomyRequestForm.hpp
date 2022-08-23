#ifndef LOBOTOMY_REQUEST_FORM_HPP
#define LOBOTOMY_REQUEST_FORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	static const int k_init_sign_grade = 72;
	static const int k_init_exe_grade = 45;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &name);
	RobotomyRequestForm(const RobotomyRequestForm &other);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm &operator=(const RobotomyRequestForm &other);

	static const std::string getInitName();
	void execute(const Bureaucrat &bc) const;
};

#endif