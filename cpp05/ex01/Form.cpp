#include "Form.hpp"
#include <iostream>

Form::Form()
	: name("unknown"), is_signed(false), sign_grade(1), exe_grade(1)
{
	guardGradeInRange(sign_grade);
	guardGradeInRange(exe_grade);
}

Form::Form(const std::string &name, int sign_grade, int exe_grade)
	: name(name), is_signed(false), sign_grade(sign_grade), exe_grade(exe_grade)
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
		this->is_signed = other.is_signed;
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

void Form::beSigned(const Bureaucrat &bc)
{
	if (this->getSignGrade() < bc.getGrade())
	{
		throw GradeTooLowException("too low grade to sign");
	}
	if (this->is_signed)
	{
		std::cout << "already signed" << std::endl;
		return;
	}
	this->is_signed = true;
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

Form::GradeTooHighException::GradeTooHighException(const std::string msg) : std::out_of_range(msg)
{
}

Form::GradeTooLowException::GradeTooLowException(const std::string msg) : std::out_of_range(msg)
{
}

std::ostream &operator<<(std::ostream &os, const Form &form)
{
	os << "Form:[ name: " << form.getName() << " sign_grade: " << form.getSignGrade()
	   << " exe_grade: " << form.getExeGrade() << " is_signed: " << form.isSigned() << " ]";
	return os;
}