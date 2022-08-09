#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : raw_bits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	this->raw_bits = n << this->fraction_bits;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->raw_bits = roundf(n * (1 << this->fraction_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed &Fixed::operator=(const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->raw_bits = other.getRawBits();
	}
	return *this;
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (raw_bits);
}

int Fixed::toInt() const
{
	return raw_bits >> fraction_bits;
}

float Fixed::toFloat() const
{
	return static_cast<float>(raw_bits) / (1 << fraction_bits);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return os;
}
