#ifndef CONVER_HPP
#define CONVER_HPP

#include <string>

class Convert
{
private:
	std::string str;
	double d_value;

public:
	Convert(const std::string &str);
	~Convert();
	Convert(const Convert &other);
	Convert &operator=(const Convert &other);

	void showInt() const;
	void showFloat() const;
	void showDouble() const;
	void showChar() const;

	void showConvert() const;
};

#endif