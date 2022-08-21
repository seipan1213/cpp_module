#include "Character.hpp"
#include <string>

Character::Character() : name("unknown")
{
	for (size_t i = 0; i < Character::k_max_materia; i++)
	{
		this->materias[i] = NULL;
	}
}

Character::Character(std::string name) : name(name)
{
	for (size_t i = 0; i < Character::k_max_materia; i++)
	{
		this->materias[i] = NULL;
	}
}

Character::Character(const Character &other)
{
	*this = other;
}

Character::~Character()
{
	for (size_t i = 0; i < Character::k_max_materia; i++)
	{
		delete this->materias[i];
	}
}

Character &Character::operator=(const Character &other)
{
	if (this != &other)
	{
		this->name = other.getName();
		for (size_t i = 0; i < Character::k_max_materia; i++)
		{
			delete this->materias[i];
			if (other.materias[i])
				this->materias[i] = other.materias[i]->clone();
			else
				this->materias[i] = NULL;
		}
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->name;
}

void Character::equip(AMateria *m)
{
	if (!m)
		return;
	for (size_t i = 0; i < Character::k_max_materia; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = m;
			return;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= static_cast<int>(Character::k_max_materia))
		return;
	this->materias[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= static_cast<int>(Character::k_max_materia) || !this->materias[idx])
		return;
	this->materias[idx]->use(target);
}