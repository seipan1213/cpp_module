#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "--default constructor ScavTrap " + this->name + "--" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "--constructor ScavTrap " + this->name + "--" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other)
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

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " GateKeeper Mode" << std::endl;
}
