#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &other);
	~ScavTrap();
	ScavTrap &operator=(ScavTrap const &other);

	void guardGate();
};

#endif