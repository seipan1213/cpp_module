#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

#include <string>
#include <exception>
#include <stdexcept>

class Bureaucrat;

class Form
{
private:
	const std::string name;
	bool is_signed;
	int sign_grade;
	int exe_grade;
	const std::string target;

	static const int k_max_grade = 1;
	static const int k_min_grade = 150;

public:
	Form();
	Form(const std::string &name, int sign_grade, int exe_grade, std::string target);
	Form(const Form &other);
	~Form();
	Form &operator=(const Form &other);

	const std::string &getName() const;
	bool isSigned() const;
	int getSignGrade() const;
	int getExeGrade() const;
	const std::string &getTarget() const;

	virtual void beSigned(const Bureaucrat &bc);
	virtual void execute(const Bureaucrat &bc) const = 0;

	void guardGradeInRange(int grade) const;
	void guardExecute(const Bureaucrat &bc) const;

	class GradeTooHighException : public std::out_of_range
	{
	public:
		GradeTooHighException(const std::string msg);
	};
	class GradeTooLowException : public std::out_of_range
	{
	public:
		GradeTooLowException(const std::string msg);
	};
	class NotSignedException : public std::out_of_range
	{
	public:
		NotSignedException(const std::string msg);
	};
};

std::ostream &operator<<(std::ostream &os, const Form &form);

#endif