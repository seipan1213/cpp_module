#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		const Animal *meta = new Animal();
		const Animal *i = new Cat();
		const Animal *j = new Dog();

		std::cout << "meta: " << meta->getType() << std::endl;
		std::cout << "i: " << i->getType() << std::endl;
		std::cout << "j: " << j->getType() << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete i;
		delete j;

		std::cout << std::endl;
	}
	{
		const WrongAnimal *meta = new WrongAnimal();
		const WrongAnimal *i = new WrongCat();

		std::cout << "meta: " << meta->getType() << std::endl;
		std::cout << "i: " << i->getType() << std::endl;
		i->makeSound();
		meta->makeSound();

		delete meta;
		delete i;

		std::cout << std::endl;
	}
}