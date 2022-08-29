#include "Convert.hpp"
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <climits>
#include <limits>
#include <cerrno>

Convert::Convert(const std::string &str) : str(str)
{
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
	}

	return (*this);
}

bool Convert::isNan(std::string str)const
{
	return (str == "nan" || str == "nanf");
}

bool Convert::isPseudoLiteral(std::string str)const
{
	return (isNan(str) || str == "+inf" || str == "+inff" || str == "-inf" || str == "-inff");
}

bool Convert::isSignedDigit(std::string str) const
{
	return (str.length() >= 2 && (str[0] == '+' || str[0] == '-') && std::isdigit(str[1]));
}

void Convert::showInt() const
{
	double d_value = 0;
	bool is_convert = this->getDValue(d_value);

	std::cout << "int: ";

	if (!is_convert || d_value < (double)INT_MIN || d_value > (double)INT_MAX || isNan(this->str))
	{
		std::cout << "impossible" << std::endl;
	}
	else
	{
		std::cout << static_cast<int>(d_value) << std::endl;
	}
}

void Convert::showFloat() const
{
	double d_value = 0;
	bool is_convert = this->getDValue(d_value);
	size_t n_digit = this->getNDigits();

	std::cout << "float: ";

	float f = static_cast<float>(d_value);
	if (!is_convert || (f != std::numeric_limits<float>::infinity() && f != -std::numeric_limits<float>::infinity() && n_digit > 7))
		std::cout << "impossible" << std::endl;
	else
	{
		if (f - static_cast<int>(f) == 0)
			std::cout << std::setprecision(7) << f << ".0f" << std::endl;
		else
			std::cout << std::setprecision(7) << f << "f" << std::endl;
	}
}

void Convert::showDouble() const
{
	double d_value = 0;
	bool is_convert = this->getDValue(d_value);
	size_t n_digit = this->getNDigits();

	std::cout << "double: ";

	if (!is_convert || n_digit > 15)
		std::cout << "impossible" << std::endl;
	else
	{
		if (d_value - static_cast<long long>(d_value) == 0)
			std::cout << std::setprecision(15) << d_value << ".0" << std::endl;
		else
			std::cout << std::setprecision(15) << d_value << std::endl;
	}
}

void Convert::showChar() const
{
	double d_value = 0;
	bool is_convert = this->getDValue(d_value);

	std::cout << "char: ";

	if (!is_convert || d_value < (double)CHAR_MIN || (double)CHAR_MAX < d_value || isNan(this->str))
		std::cout << "impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(d_value)))
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << "'" << static_cast<char>(d_value) << "'" << std::endl;
}

bool Convert::getDValue(double &d_value) const
{
	if (std::isdigit(this->str[0]) || isSignedDigit(this->str) || isPseudoLiteral(this->str))
	{
		d_value = strtod(this->str.c_str(), NULL);
		if (errno == ERANGE)
			return (false);
		return (true);
	}
	else if (str.length() == 1)
	{
		d_value = static_cast<double>(str[0]);
		return (true);
	}

	return (false);
}

size_t Convert::getNDigits() const
{
	size_t i = 0;
	size_t sign = isSignedDigit(this->str);

	while (this->str[i + sign])
	{
		if (!std::isdigit(this->str[i + sign]))
			break;
		i++;
	}
	return (i);
}

void Convert::showConvert() const
{
	this->showChar();
	this->showInt();
	this->showFloat();
	this->showDouble();
}
