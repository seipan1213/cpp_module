#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
protected:
	std::string name;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &other);
	~DiamondTrap();
	DiamondTrap &operator=(DiamondTrap const &other);

	void attack(std::string const &target);
	void whoAmI();
};

#endif
