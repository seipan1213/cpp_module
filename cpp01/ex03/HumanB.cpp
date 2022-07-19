#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their ";
	if (this->weapon != NULL)
	{
		std::cout << this->weapon->getType();
	}
	else
	{
		std::cout << "no weapon";
	}
	std::cout << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
