#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"
#include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
private:
	static const size_t k_max_materias = 4;
	AMateria *materias[k_max_materias];

public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	virtual ~MateriaSource();
	MateriaSource &operator=(const MateriaSource &other);

	void learnMateria(AMateria *materia);
	AMateria *createMateria(std::string const &type);
};

#endif