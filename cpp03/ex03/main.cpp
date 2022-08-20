#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

#include <iostream>

int main()
{
	ClapTrap clapTrap("Clap");
	ScavTrap scavTrap("Scav");
	FragTrap fragTrap("Frag");
	DiamondTrap diamondTrap("Diamond");

	std::cout << std::endl;
	diamondTrap.showParam();
	std::cout << std::endl;

	clapTrap.attack("Scav");
	scavTrap.takeDamage(0);
	scavTrap.attack("Frag");
	fragTrap.takeDamage(20);
	fragTrap.attack("Diamond");
	diamondTrap.takeDamage(30);
	diamondTrap.attack("Clap");
	clapTrap.takeDamage(30);
	std::cout << std::endl;

	scavTrap.guardGate();
	fragTrap.highFivesGuys();
	diamondTrap.guardGate();
	diamondTrap.highFivesGuys();
	diamondTrap.whoAmI();
	std::cout << std::endl;

	clapTrap.beRepaired(5);
	scavTrap.beRepaired(7);
	fragTrap.beRepaired(10);
	diamondTrap.beRepaired(100);
	std::cout << std::endl;
}
