#include "Form.hpp"
#include <iostream>

Form::Form()
	: name("unknown"), is_signed(false), sign_grade(1), exe_grade(1)
{
	guardGradeInRange(sign_grade);
	guardGradeInRange(exe_grade);
}

Form::Form(const std::string &name, int sign_grade, int exe_grade, std::string target)
	: name(name), is_signed(false), sign_grade(sign_grade), exe_grade(exe_grade), target(target)
{
	guardGradeInRange(sign_grade);
	guardGradeInRange(exe_grade);
}

Form::Form(const Form &other)
	: name(other.name), is_signed(other.is_signed),
	  sign_grade(other.sign_grade),
	  exe_grade(other.exe_grade)
{
	guardGradeInRange(sign_grade);
	guardGradeInRange(exe_grade);
}

Form::~Form()
{
}

Form &Form::operator=(const Form &other)
{
	if (this != &other)
	{
		guardGradeInRange(other.sign_grade);
		guardGradeInRange(other.exe_grade);
		this->is_signed = other.is_signed;
		this->sign_grade = other.sign_grade;
		this->exe_grade = other.exe_grade;
	}
	return *this;
}

const std::string &Form::getName() const
{
	return this->name;
}

bool Form::isSigned() const
{
	return this->is_signed;
}

int Form::getSignGrade() const
{
	return this->sign_grade;
}

int Form::getExeGrade() const
{
	return this->exe_grade;
}

const std::string &Form::getTarget() const
{
	return this->target;
}

void Form::beSigned(const Bureaucrat &bc)
{
	if (this->getSignGrade() < bc.getGrade())
	{
		throw GradeTooHighException("grade too low to sign");
	}
	if (this->is_signed)
	{
		std::cout << "already signed" << std::endl;
		return;
	}
	this->is_signed = true;
}

void Form::execute(const Bureaucrat &bc) const
{
	std::cout << bc << ": No Action" << std::endl;
}

void Form::guardGradeInRange(int grade) const
{
	if (grade < k_max_grade)
	{
		throw GradeTooHighException("Grade too high!!!");
	}
	if (grade > k_min_grade)
	{
		throw GradeTooLowException("Grade too low!!!");
	}
}

void Form::guardExecute(const Bureaucrat &bc) const
{
	if (bc.getGrade() > exe_grade)
	{
		throw GradeTooLowException("grade too low to execute");
	}
	if (!this->isSigned())
	{
		throw NotSignedException("form not signed");
	}
}

Form::GradeTooHighException::GradeTooHighException(const std::string msg) : std::out_of_range(msg)
{
}

Form::GradeTooLowException::GradeTooLowException(const std::string msg) : std::out_of_range(msg)
{
}

Form::NotSignedException::NotSignedException(const std::string msg) : std::out_of_range(msg)
{
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Form:[ name: " << form.getName() << " sign_grade: " << form.getSignGrade()
	   << " exe_grade: " << form.getExeGrade() << " is_signed: " << form.getSignGrade() << " ]";
	return os;
}