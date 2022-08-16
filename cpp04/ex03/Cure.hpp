#ifndef CURE_HPP
#define CURE_HPP

#include <string>

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure &other);
	~Cure();
	Cure &operator=(const Cure &other);

	Cure *clone();
	void use(ICharacter &target);
};
#endif