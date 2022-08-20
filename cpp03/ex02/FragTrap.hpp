#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"
#include <string>

class FragTrap : public ClapTrap
{
protected:
	static const long k_init_hp = 100;
	static const long k_init_ep = 100;
	static const long k_init_ad = 30;

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const &other);
	virtual ~FragTrap();
	FragTrap &operator=(FragTrap const &other);

	void highFivesGuys(void);
};

#endif
