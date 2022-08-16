#ifndef ICE_HPP
#define ICE_HPP

#include <string>

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &other);
	~Ice();
	Ice &operator=(const Ice &other);

	Ice *clone();
	void use(ICharacter &target);
};
#endif