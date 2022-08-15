#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
	ClapTrap::name = "unknown_clap_name";
	this->name = "unknown";
	this->hit_point = FragTrap::hit_point;
	this->energy_point = ScavTrap::energy_point;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "--default constructor DiamondTrap " + this->name + "--" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
	ClapTrap::name = name + "_clap_name";
	this->name = name;
	this->hit_point = FragTrap::hit_point;
	this->energy_point = ScavTrap::energy_point;
	this->attack_damage = FragTrap::attack_damage;
	std::cout << "--constructor DiamondTrap " + this->name + "--" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "--copy constructor DiamondTrap " + this->name + "--" << std::endl;
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
	std::cout << "my DiamondName: " + this->name + " my ClapName: " + ClapTrap::name << std::endl;
}
