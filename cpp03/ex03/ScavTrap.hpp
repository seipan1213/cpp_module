#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class ScavTrap : virtual public ClapTrap
{
protected:
	static const long k_init_hp = 100;
	static const long k_init_ep = 50;
	static const long k_init_ad = 20;

public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const &other);
	virtual ~ScavTrap();
	ScavTrap &operator=(ScavTrap const &other);

	void attack(std::string const &target);
	void guardGate();
};

#endif
