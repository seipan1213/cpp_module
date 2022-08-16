#include "Cure.hpp"
#include <string>

Cure::Cure() : AMateria(type)
{
}

Cure::Cure(const Cure &other)
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
}
