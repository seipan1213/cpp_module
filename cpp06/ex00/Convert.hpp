#ifndef CONVER_HPP
#define CONVER_HPP

#include <string>

class Convert
{
private:
	std::string str;

public:
	Convert(const std::string &str);
	~Convert();
	Convert(const Convert &other);
	Convert &operator=(const Convert &other);

	int toInt() const;
	float toFloat() const;
	double toDouble() const;
	char toChar() const;
};

#endif