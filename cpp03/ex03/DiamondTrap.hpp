#ifndef DIAMOND_TRAP_HPP
#define DIAMOND_TRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <string>

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;

	static const long k_init_hp = FragTrap::k_init_hp;
	static const long k_init_ep = ScavTrap::k_init_ep;
	static const long k_init_ad = FragTrap::k_init_ad;

public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const &other);
	virtual ~DiamondTrap();
	DiamondTrap &operator=(DiamondTrap const &other);

	void attack(std::string const &target);
	void whoAmI();
	void showParam();
};

#endif
