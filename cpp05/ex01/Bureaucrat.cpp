#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat()
	: name("unknown"), grade(1)
{
}

Bureaucrat::Bureaucrat(std::string name, int grade)
	: name(name), grade(grade)
{
	guardGradeInRange();
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
	*this = other;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
	if (this != &other)
	{
		this->grade = other.grade;
	}
	return *this;
}

Bureaucrat &Bureaucrat::operator++()
{
	increment(-1);
	return *this;
}

Bureaucrat Bureaucrat::operator++(int)
{
	Bureaucrat tmp = *this;
	increment(-1);
	return tmp;
}

Bureaucrat &Bureaucrat::operator--()
{
	increment(1);
	return *this;
}

Bureaucrat Bureaucrat::operator--(int)
{
	Bureaucrat tmp = *this;
	increment(1);
	return tmp;
}

void Bureaucrat::increment(int i)
{
	this->grade += i;
	guardGradeInRange();
}

void Bureaucrat::guardGradeInRange()
{
	if (grade < k_max_grade)
	{
		grade = k_max_grade;
		throw GradeTooHighException();
	}
	if (grade > k_min_grade)
	{
		grade = k_min_grade;
		throw GradeTooLowException();
	}
}

const std::string &Bureaucrat::getName() const
{
	return this->name;
}

int Bureaucrat::getGrade() const
{
	return this->grade;
}

void Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signed " << form << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << *this << " couldn't sign " << form << " because " << e.what() << std::endl;
	}
}

Bureaucrat::GradeTooHighException::GradeTooHighException() : std::out_of_range("Grade too high!!!")
{
}

Bureaucrat::GradeTooLowException::GradeTooLowException() : std::out_of_range("Grade too low!!!")
{
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &bc)
{
	os << bc.getName() << ", bureaucrat grade " << bc.getGrade() << ".";
	return os;
}