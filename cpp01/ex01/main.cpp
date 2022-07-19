#include "Zombie.hpp"

int main()
{
	int n = 10;
	Zombie *zombies = zombieHorde(n, "zon-san-tati");

	for (int i = 0; i < n; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
}