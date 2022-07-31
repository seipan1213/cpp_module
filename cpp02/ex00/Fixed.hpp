#ifndef FIXED_H
#define FIXED_H

class Fixed
{
private:
	int raw_bits;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &other);
	Fixed &operator=(Fixed const &other);
	int getRawBits() const;
};

#endif