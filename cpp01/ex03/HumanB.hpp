#ifndef __HUMBN_B_H__
#define __HUMBN_B_H__

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
private:
	std::string name;
	Weapon *weapon;

public:
	HumanB(std::string name);
	~HumanB();
	void attack();
	void setWeapon(Weapon &weapon);
};

#endif