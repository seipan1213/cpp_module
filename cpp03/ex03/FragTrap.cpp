#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "--constructor FragTrap " + this->name + "--" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "--constructor FragTrap " + this->name + "--" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	std::cout << "--constructor FragTrap " + this->name + "--" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "--destructor FragTrap " + this->name + "--" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{
	ClapTrap::operator=(other);
	std::cout << "FragTrap orerator= " + this->name << std::endl;

	return *this;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " pls high fives " << std::endl;
}
