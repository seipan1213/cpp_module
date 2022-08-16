#include "Animal.hpp"
#include <iostream>

const std::string Animal::k_barks_sound = "Animal SOUND!";
const std::string Animal::k_init_type = "noType";

Animal::Animal() : type(k_init_type)
{
	std::cout << "[" + this->type + "] Animal constructor" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "[" + this->type + "] Animal constructor" << std::endl;
}

Animal::Animal(const Animal &other)
{
	std::cout << "[" + this->type + "] Animal copy constructor" << std::endl;
	*this = other;
}

Animal &Animal::operator=(const Animal &other)
{
	std::cout << "[" + this->type + "] Animal operator=" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

Animal::~Animal()
{
	std::cout << "[" + this->type + "] Animal destructor" << std::endl;
}

void Animal::makeSound() const
{
	std::cout << "[" << this->type << "] " << k_barks_sound << std::endl;
}

const std::string Animal::getType() const
{
	return this->type;
}