#include "Animal.hpp"
#include <iostream>

const std::string Animal::k_barks_sound = "Animal SOUND!";
const std::string Animal::k_init_type = "noType";

Animal::Animal() : type("noType")
{
	std::cout << "[" + this->type + "] Animal constructor" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "[" + this->type + "] Animal constructor" << std::endl;
}

Animal::Animal(const Animal &other)
{
	*this = other;
}

Animal::~Animal()
{
	std::cout << "[" + this->type + "] Animal destructor" << std::endl;
}

void Animal::makeSound()
{
	std::cout << "[" << this->type << "] " << k_barks_sound << std::endl;
}