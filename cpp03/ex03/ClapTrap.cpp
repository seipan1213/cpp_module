#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
	: name("unknown"), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "--default constructor ClapTrap " + this->name + "--" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: name(name), hit_point(10), energy_point(10), attack_damage(0)
{
	std::cout << "--constructor ClapTrap " + this->name + "--" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "--destructor ClapTrap " + this->name + "--" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	this->name = other.name;
	this->hit_point = other.hit_point;
	this->energy_point = other.energy_point;
	this->attack_damage = other.attack_damage;
	std::cout << "--copy constructor ClapTrap " + this->name + "--" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hit_point = other.hit_point;
		this->energy_point = other.energy_point;
		this->attack_damage = other.attack_damage;
	}
	std::cout << "ClapTrap orerator= " + this->name << std::endl;

	return *this;
}

void ClapTrap::attack(const std::string &target)
{
	if (!this->isAlive() || !this->hasEnergy())
		return;
	this->energy_point--;
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->isAlive() || !this->hasEnergy())
		return;
	this->hit_point -= amount;
	this->energy_point--;
	std::cout << "ClapTrap " << this->name << " takeDamege " << amount << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->isAlive() || !this->hasEnergy())
		return;
	this->hit_point += amount;
	this->energy_point--;
	std::cout << "ClapTrap " << this->name << " beRepaierd " << amount << std::endl;
}

bool ClapTrap::isAlive()
{
	return this->hit_point > 0;
}

bool ClapTrap::hasEnergy()
{
	return this->energy_point > 0;
}
