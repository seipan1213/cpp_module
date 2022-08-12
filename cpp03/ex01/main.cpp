#include "ScavTrap.hpp"

int main()
{
	ClapTrap clapTrap("Clap");
	ScavTrap scavTrap("Scav");
	ScavTrap hogeTrap("hoge");

	hogeTrap = scavTrap;

	clapTrap.attack("Scav");
	scavTrap.takeDamage(0);
	scavTrap.attack("Clap");
	clapTrap.takeDamage(20);

	scavTrap.guardGate();

	clapTrap.beRepaired(5);
	scavTrap.beRepaired(7);
}
