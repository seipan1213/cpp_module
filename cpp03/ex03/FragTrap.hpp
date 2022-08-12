#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : virtual public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &other);
	~FragTrap();
	FragTrap &operator=(FragTrap const &other);

	void highFivesGuys(void);
};

#endif
