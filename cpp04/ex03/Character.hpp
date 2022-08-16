#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	static const int k_max_materia = 4;
	AMateria *materias[k_max_materia];

public:
	Character();
	Character(std::string name);
	Character(const Character &other);
	~Character();
	Character &operator=(const Character &other);

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif