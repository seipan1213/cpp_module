#include "Ice.hpp"
#include <string>

Ice::Ice() : AMateria(type)
{
}

Ice::Ice(const Ice &other)
{
	*this = other;
}

Ice::~Ice()
{
}

Ice &Ice::operator=(const Ice &other)
{
	if (this != &other)
	{
		this->type = other.getType();
	}

	return *this;
}

Ice *Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
}