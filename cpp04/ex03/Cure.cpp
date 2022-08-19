#include "Cure.hpp"
#include <string>
#include <iostream>

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure &other) : AMateria()
{
	*this = other;
}

Cure::~Cure()
{
}

Cure &Cure::operator=(const Cure &other)
{
	if (this != &other)
	{
		this->type = other.getType();
	}

	return *this;
}

Cure *Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " + target.getName() + "'s wounds *" << std::endl;
}
