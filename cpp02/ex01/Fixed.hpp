#ifndef FIXED_H
#define FIXED_H

#include <ostream>

class Fixed
{
private:
	int raw_bits;
	static const int fraction_bits = 8;

public:
	Fixed();
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(Fixed const &other);
	int getRawBits() const;
	int toInt() const;
	float toFloat() const;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
#endif