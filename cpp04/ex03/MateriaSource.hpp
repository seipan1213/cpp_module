#ifndef MATERIA_SOURCE_HPP
#define MATERIA_SOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
public:
	MateriaSource();
	MateriaSource(const MateriaSource &other);
	~MateriaSource();
	MateriaSource &operator=(const MateriaSource &other);

	void learnMateria(AMateria *);
	AMateria *createMateria(std::string const &type);
};

#endif