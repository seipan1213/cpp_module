#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (size_t i = 0; i < MateriaSource::k_max_materias; i++)
	{
		materias[i] = NULL;
	}
}

MateriaSource::MateriaSource(const MateriaSource &other)
{
	for (size_t i = 0; i < MateriaSource::k_max_materias; i++)
	{
		materias[i] = NULL;
	}
	*this = other;
}

MateriaSource::~MateriaSource()
{
	for (size_t i = 0; i < MateriaSource::k_max_materias; i++)
	{
		delete this->materias[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other)
{
	if (this != &other)
	{
		for (size_t i = 0; i < MateriaSource::k_max_materias; i++)
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

void MateriaSource::learnMateria(AMateria *materia)
{
	if (!materia)
		return;
	for (size_t i = 0; i < MateriaSource::k_max_materias; i++)
	{
		if (!this->materias[i])
		{
			this->materias[i] = materia;
			return;
		}
	}
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (size_t i = 0; i < MateriaSource::k_max_materias; i++)
	{
		if (this->materias[i] && type == this->materias[i]->getType())
		{
			return materias[i]->clone();
		}
	}
	return NULL;
}