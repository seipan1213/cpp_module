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
	int getRawBits() const;
	void setRawBits(int raw);
	int toInt() const;
	float toFloat() const;

	Fixed &operator=(const Fixed &other);
	bool operator>(const Fixed &other);
	bool operator<(const Fixed &other);
	bool operator>=(const Fixed &other);
	bool operator<=(const Fixed &other);
	bool operator==(const Fixed &other);
	bool operator!=(const Fixed &other);
	Fixed operator+(const Fixed &other);
	Fixed operator-(const Fixed &other);
	Fixed operator*(const Fixed &other);
	Fixed operator/(const Fixed &other);
	Fixed operator++();
	Fixed operator++(int);
	Fixed operator--();
	Fixed operator--(int);

	static Fixed &min(Fixed &left, Fixed &right);
	static const Fixed &min(const Fixed &left, const Fixed &right);
	static Fixed &max(Fixed &left, Fixed &right);
	static const Fixed &max(const Fixed &left, const Fixed &right);
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);
#endif
