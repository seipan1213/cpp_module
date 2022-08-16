#ifndef ICE_HPP
#define ICE_HPP

#include <string>

#include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice &other);
	Ice(std::string const &type);
	~Ice();
	Ice &operator=(const Ice &other);

	Ice *clone() const;
	void use(ICharacter &target);
};
#endif