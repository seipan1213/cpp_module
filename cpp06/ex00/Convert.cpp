#include "Convert.hpp"
#include <iostream>
#include <cstdlib>

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

int Convert::toInt() const
{
	char *p = NULL;
	int res = std::strtol(this->str.c_str(), &p, 10);

	if (*p)
	{
		std::cerr << "toInt: can't convert (string =" << this->str << ")" << std::endl;
		return 0;
	}

	return res;
}

float Convert::toFloat() const
{
	char *p = NULL;
	float res = std::strtof(this->str.c_str(), &p);

	if (*p)
	{
		std::cerr << "toFloat: can't convert (string =" << this->str << ")" << std::endl;
		return 0;
	}

	return res;
}

double Convert::toDouble() const
{
	char *p = NULL;
	float res = std::strtod(this->str.c_str(), &p);

	if (*p)
	{
		std::cerr << "toDouble: can't convert (string =" << this->str << ")" << std::endl;
		return 0;
	}

	return res;
}

char Convert::toChar() const
{
	char res = *(this->str.c_str());

	if (!res)
	{
		std::cerr << "toChar: can't convert (string =" << this->str << ")" << std::endl;
		return 0;
	}

	return res;
}