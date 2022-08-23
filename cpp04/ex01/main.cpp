#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		delete j;
		delete i;

		std::cout << std::endl;
	}
	{
		Animal *animals[2];

		animals[0] = new Dog();
		animals[1] = new Cat();
		std::cout << std::endl;

		Dog c_dog(*(static_cast<Dog *>(animals[0])));
		std::cout << std::endl;

		Cat c_cat(*(static_cast<Cat *>(animals[1])));
		std::cout << std::endl;

		static_cast<Dog *>(animals[0])->showIdeas();
		c_dog.showIdeas();
		std::cout << std::endl;

		static_cast<Dog *>(animals[1])->showIdeas();
		c_cat.showIdeas();
		std::cout << std::endl;

		for (int i = 0; i < 2; i++)
		{
			delete animals[i];
		}
	}
}