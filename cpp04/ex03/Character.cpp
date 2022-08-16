#include "Character.hpp"
#include <string>

Character::Character() : name("unknown")
{
}

Character::Character(std::string name) : name(name)
{
}

Character::Character(const Character &other)
{
	*this = other;
}

Character::~Character()
{
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->name = other.getName();
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
}

void Character::unequip(int idx)
{
}

void Character::use(int idx, ICharacter &target)
{
}