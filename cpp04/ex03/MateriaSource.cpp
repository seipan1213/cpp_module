#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	*this = other;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
	}
}

void MateriaSource::learnMateria(AMateria *)
{
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
}