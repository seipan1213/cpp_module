#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap("unknown_clap_name")
{
	this->name = "unknown";
	this->hit_point = k_init_hp;
	this->energy_point = k_init_ep;
	this->attack_damage = k_init_ad;
	std::cout << "--default constructor DiamondTrap " + this->name + "--" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	this->name = name;
	this->hit_point = k_init_hp;
	this->energy_point = k_init_ep;
	this->attack_damage = k_init_ad;
	std::cout << "--constructor DiamondTrap " + this->name + "--" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other) : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "--copy constructor DiamondTrap " + this->name + "--" << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "--destructor DiamondTrap " + this->name + "--" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &other)
{
	ClapTrap::operator=(other);
	std::cout << "DiamondTrap orerator= " + this->name << std::endl;

	return *this;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	if (!this->isAlive() || !this->hasEnergy())
	{
		std::cout << "Failed: my DiamondName: " + this->name + " my ClapName: " + ClapTrap::name << std::endl;
		return;
	}
	std::cout << "my DiamondName: " + this->name + " my ClapName: " + ClapTrap::name << std::endl;
}

void DiamondTrap::showParam()
{
	std::cout << "hp: " << this->hit_point << " ep: " << this->energy_point << " ad: " << this->attack_damage << std::endl;
}