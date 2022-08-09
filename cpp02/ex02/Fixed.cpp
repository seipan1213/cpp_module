#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed() : raw_bits(0)
{
	// std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int n)
{
	// std::cout << "Int constructor called" << std::endl;
	this->raw_bits = n << fraction_bits;
}

Fixed::Fixed(const float n)
{
	// std::cout << "Float constructor called" << std::endl;
	this->raw_bits = roundf(n * (1 << fraction_bits));
}

Fixed::~Fixed()
{
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

int Fixed::getRawBits() const
{
	// std::cout << "getRawBits member function called" << std::endl;
	return (raw_bits);
}

void Fixed::setRawBits(int raw)
{
	this->raw_bits = raw;
}

int Fixed::toInt() const
{
	return raw_bits >> fraction_bits;
}

float Fixed::toFloat() const
{
	return static_cast<float>(raw_bits) / (1 << fraction_bits);
}

Fixed &Fixed::operator=(const Fixed &other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		this->raw_bits = other.getRawBits();
	}
	return *this;
}

bool Fixed::operator>(const Fixed &other)
{
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed &other)
{
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed &other)
{
	return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed &other)
{
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed &other)
{
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed &other)
{
	return this->getRawBits() != other.getRawBits();
}

Fixed Fixed::operator+(const Fixed &other)
{
	Fixed res;
	res.setRawBits(this->getRawBits() + other.getRawBits());
	return res;
}

Fixed Fixed::operator-(const Fixed &other)
{
	Fixed res;
	res.setRawBits(this->getRawBits() - other.getRawBits());
	return res;
}

Fixed Fixed::operator*(const Fixed &other)
{
	Fixed res;
	res.setRawBits(this->getRawBits() * other.getRawBits() >> fraction_bits);
	return res;
}

Fixed Fixed::operator/(const Fixed &other)
{
	if (other.getRawBits() == 0)
	{
		std::cout << "ERR: Division by zero" << std::endl;
		return (*this);
	}
	Fixed res;
	res.setRawBits(static_cast<float>(this->getRawBits()) / other.getRawBits() * (1 << fraction_bits));
	return res;
}

Fixed Fixed::operator++()
{
	this->raw_bits++;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	++*this;
	return tmp;
}

Fixed Fixed::operator--()
{
	this->raw_bits--;
	return *this;
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	--*this;
	return tmp;
}

Fixed &Fixed::min(Fixed &left, Fixed &right)
{
	return left.getRawBits() < right.getRawBits() ? left : right;
}

const Fixed &Fixed::min(const Fixed &left, const Fixed &right)
{
	return left.getRawBits() < right.getRawBits() ? left : right;
}

Fixed &Fixed::max(Fixed &left, Fixed &right)
{
	return left.getRawBits() > right.getRawBits() ? left : right;
}

const Fixed &Fixed::max(const Fixed &left, const Fixed &right)
{
	return left.getRawBits() > right.getRawBits() ? left : right;
}

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return os;
}
