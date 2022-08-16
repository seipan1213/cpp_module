#include <iostream>

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	/** Error
	{
		Animal animal;
		animal.makeSound();
	}
	std::cout << std::endl;
	*/
	{
		Cat cat;
		cat.makeSound();
	}
	std::cout << std::endl;
	{
		Dog dog;
		dog.makeSound();
	}
}