#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <string>

class ClapTrap
{
private:
	std::string name;
	long hit_point;
	long energy_point;
	long attack_damage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(ClapTrap const &other);
	virtual ~ClapTrap();
	ClapTrap &operator=(ClapTrap const &other);

	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	bool isAlive();
	bool hasEnergy();
};

#endif
