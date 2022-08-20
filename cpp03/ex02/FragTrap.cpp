#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	this->hit_point = k_init_hp;
	this->energy_point = k_init_ep;
	this->attack_damage = k_init_ad;
	std::cout << "--default constructor FragTrap " + this->name + "--" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_point = k_init_hp;
	this->energy_point = k_init_ep;
	this->attack_damage = k_init_ad;
	std::cout << "--constructor FragTrap " + this->name + "--" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap()
{
	std::cout << "--copy constructor FragTrap " + this->name + "--" << std::endl;
	*this = other;
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
	if (!this->isAlive() || !this->hasEnergy())
	{
		std::cout << "Failed: FragTrap " << this->name << " pls high fives " << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->name << " pls high fives " << std::endl;
}
