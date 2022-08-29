#ifndef CONVER_HPP
#define CONVER_HPP

#include <string>

class Convert
{
private:
	std::string str;

	bool getDValue(double &d_value) const;
	size_t getNDigits() const;
	bool isNan(std::string str) const;
	bool isPseudoLiteral(std::string str) const;
	bool isSignedDigit(std::string str) const;

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