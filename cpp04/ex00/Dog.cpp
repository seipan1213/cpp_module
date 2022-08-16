#include "Dog.hpp"
#include <iostream>

const std::string Dog::k_barks_sound = "Wan Wan!";
const std::string Dog::k_init_type = "Dog";

Dog::Dog() : Animal(k_init_type)
{
	std::cout << "[" + this->type + "] Dog constructor" << std::endl;
}

Dog::Dog(const Dog &other) : Animal()
{
	std::cout << "[" + this->type + "] Dog copy constructor" << std::endl;
	*this = other;
}

Dog::~Dog()
{
	std::cout << "[" + this->type + "] Dog destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "[" + this->type + "] Dog operator=" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}

	return *this;
}

void Dog::makeSound() const
{
	std::cout << "[" << this->type << "] " << k_barks_sound << std::endl;
}