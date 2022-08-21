#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include <iostream>

int main()
{
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter *bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
		std::cout << std::endl;
	}
	{
		IMateriaSource *src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter *me = new Character("me");
		ICharacter *you = new Character("you");
		AMateria *tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		you->equip(tmp);
		tmp = src->createMateria("cure");
		you->equip(tmp);

		ICharacter *hoge = new Character("hoge");
		me->use(0, *hoge);
		me->use(1, *hoge);
		me->use(2, *hoge);
		me->use(3, *hoge);
		me->use(4, *hoge);

		you->use(0, *me);
		you->use(1, *me);
		you->use(2, *me);
		you->use(3, *me);
		you->use(4, *me);

		delete hoge;
		delete me;
		delete you;
		delete src;
	}
}
