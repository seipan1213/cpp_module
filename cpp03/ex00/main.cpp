#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap_trap;
	clap_trap.attack("TARGET");
	clap_trap.takeDamage(5);
	clap_trap.beRepaired(10);
}