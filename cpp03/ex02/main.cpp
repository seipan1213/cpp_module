#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap clapTrap("Clap");
	ScavTrap scavTrap("Scav");
	FragTrap fragTrap("Frag");

	clapTrap.attack("Scav");
	scavTrap.takeDamage(0);
	scavTrap.attack("Frag");
	fragTrap.takeDamage(20);
	fragTrap.attack("Clap");
	clapTrap.takeDamage(30);

	scavTrap.guardGate();
	fragTrap.highFivesGuys();

	clapTrap.beRepaired(5);
	scavTrap.beRepaired(7);
	fragTrap.beRepaired(10);
}