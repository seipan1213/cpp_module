#ifndef __HUMAN_A_H__
#define __HUMAN_A_H__

#include "Weapon.hpp"
#include <iostream>

class HumanA
{
private:
	std::string name;
	Weapon &weapon;

public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA();
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif
