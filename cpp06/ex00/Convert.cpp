#include "Convert.hpp"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <climits>
#include <limits>
#include <cerrno>

Convert::Convert(const std::string &str) : str(str)
{
	char *p = NULL;
	d_value = std::strtod(str.c_str(), &p);
}

Convert::~Convert()
{
}

Convert::Convert(const Convert &other)
{
	*this = other;
}

Convert &Convert::operator=(const Convert &other)
{
	if (this == &other)
	{
		this->str = other.str;
		this->d_value = other.d_value;
	}

	return (*this);
}

void Convert::showInt() const
{
	std::cout << "int: ";

	if (this->d_value < (double)INT_MIN || this->d_value > (double)INT_MAX)
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		std::cout << static_cast<int>(this->d_value) << std::endl;
	}
}

void Convert::showFloat() const
{
	std::cout << "float: ";

	float f = static_cast<float>(this->d_value);
	if (f != std::numeric_limits<float>::infinity() && f != -std::numeric_limits<float>::infinity())
		std::cout << "impossible" << std::endl;
	else
	{
		std::cout << std::fixed << std::setprecision(1) << f << "f" << std::endl;
	}
}

void Convert::showDouble() const
{
	std::cout << "double: ";
	std::cout << std::fixed << std::setprecision(1) << this->d_value << std::endl;
}

void Convert::showChar() const
{
	std::cout << "char: ";

	if (this->d_value < (double)CHAR_MIN || (double)CHAR_MAX < this->d_value)
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(this->d_value))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(this->d_value) << "'" << std::endl;
}

void Convert::showConvert() const
{
	this->showChar();
	this->showInt();
	this->showFloat();
	this->showDouble();
}
