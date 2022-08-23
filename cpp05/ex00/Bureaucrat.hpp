#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include <stdexcept>

class Bureaucrat
{
private:
	const std::string name;
	int grade;
	static const int k_max_grade = 1;
	static const int k_min_grade = 150;

public:
	Bureaucrat();
	Bureaucrat(const std::string &name, int grade);
	Bureaucrat(const Bureaucrat &other);
	Bureaucrat &operator=(const Bureaucrat &other);
	virtual ~Bureaucrat();

	Bureaucrat &operator++();
	Bureaucrat operator++(int);
	Bureaucrat &operator--();
	Bureaucrat operator--(int);

	void increment(int i);
	void guardGradeInRange(int grade) const;

	const std::string &getName() const;
	int getGrade() const;

	class GradeTooHighException : public std::out_of_range
	{
	public:
		GradeTooHighException();
	};
	class GradeTooLowException : public std::out_of_range
	{
	public:
		GradeTooLowException();
	};
};

std::ostream &operator<<(std::ostream &ost, Bureaucrat const &bc);

#endif