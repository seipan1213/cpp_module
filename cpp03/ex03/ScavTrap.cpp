#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hit_point = k_init_hp;
	this->energy_point = k_init_ep;
	this->attack_damage = k_init_ad;
	std::cout << "--default constructor ScavTrap " + this->name + "--" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_point = k_init_hp;
	this->energy_point = k_init_ep;
	this->attack_damage = k_init_ad;
	std::cout << "--constructor ScavTrap " + this->name + "--" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap()
{
	std::cout << "--copy constructor ScavTrap " + this->name + "--" << std::endl;
	*this = other;
}

ScavTrap::~ScavTrap()
{
	std::cout << "--destructor ScavTrap " + this->name + "--" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	ClapTrap::operator=(other);
	std::cout << "ScavTrap orerator= " + this->name << std::endl;

	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->isAlive() || !this->hasEnergy())
	{
		std::cout << "Failed: ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage !" << std::endl;
		return;
	}
	this->energy_point--;
	std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage !" << std::endl;
}

void ScavTrap::guardGate()
{
	if (!this->isAlive() || !this->hasEnergy())
	{
		std::cout << "Failed: ScavTrap " << this->name << " GateKeeper Mode" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " GateKeeper Mode" << std::endl;
}
