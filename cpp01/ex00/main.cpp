#include "Zombie.hpp"

int main()
{
	Zombie *zombie = newZombie("zon-san");

	randomChump("rand-zon-san");
	delete zombie;
}