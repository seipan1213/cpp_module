#include "Cat.hpp"
#include <iostream>

const std::string Cat::k_barks_sound = "Nyan Nyan!";
const std::string Cat::k_init_type = "Cat";

Cat::Cat() : Animal(k_init_type)
{
	std::cout << "[" + this->type + "] Cat constructor" << std::endl;
}

Cat::Cat(const Cat &other) : Animal()
{
	std::cout << "[" + this->type + "] Cat copy constructor" << std::endl;
	*this = other;
}

Cat::~Cat()
{
	std::cout << "[" + this->type + "] Cat destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "[" + this->type + "] Cat operator=" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}

	return *this;
}

void Cat::makeSound() const
{
	std::cout << "[" << this->type << "] " << k_barks_sound << std::endl;
}
