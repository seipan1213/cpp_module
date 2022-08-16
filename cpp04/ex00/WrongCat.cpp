#include "WrongCat.hpp"
#include <iostream>

const std::string WrongCat::k_barks_sound = "Wrong Nyan Nyan!";
const std::string WrongCat::k_init_type = "WrongCat";

WrongCat::WrongCat() : WrongAnimal(k_init_type)
{
	std::cout << "[" + this->type + "] WrongCat constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal()
{
	std::cout << "[" + this->type + "] WrongCat copy constructor" << std::endl;
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "[" + this->type + "] WrongCat destructor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	std::cout << "[" + this->type + "] WrongCat operator=" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
	}

	return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "[" << this->type << "] " << k_barks_sound << std::endl;
}