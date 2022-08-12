#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClapTrap clapTrap("Clap");
	ScavTrap scavTrap("Scav");
	FragTrap fragTrap("Frag");
	DiamondTrap diamondTrap("Diamond");

	clapTrap.attack("Scav");
	scavTrap.takeDamage(0);
	scavTrap.attack("Frag");
	fragTrap.takeDamage(20);
	fragTrap.attack("Diamond");
	diamondTrap.takeDamage(30);
	diamondTrap.attack("Clap");
	clapTrap.takeDamage(30);

	scavTrap.guardGate();
	fragTrap.highFivesGuys();
	diamondTrap.whoAmI();

	clapTrap.beRepaired(5);
	scavTrap.beRepaired(7);
	fragTrap.beRepaired(10);
	diamondTrap.beRepaired(100);
}
