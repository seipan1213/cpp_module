#include "WrongAnimal.hpp"
#include <iostream>

const std::string WrongAnimal::k_barks_sound = "WrongAnimal SOUND!";
const std::string WrongAnimal::k_init_type = "noType";

WrongAnimal::WrongAnimal() : type(k_init_type)
{
	std::cout << "[" + this->type + "] WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "[" + this->type + "] WrongAnimal constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
	std::cout << "[" + this->type + "] WrongAnimal copy constructor" << std::endl;
	*this = other;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "[" + this->type + "] WrongAnimal operator=" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "[" + this->type + "] WrongAnimal destructor" << std::endl;
}

void WrongAnimal::makeSound() const
{
	std::cout << "[" << this->type << "] " << k_barks_sound << std::endl;
}

const std::string WrongAnimal::getType() const
{
	return this->type;
}