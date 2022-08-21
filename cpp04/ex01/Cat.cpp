#include "Cat.hpp"
#include <iostream>

const std::string Cat::k_barks_sound = "Nyan Nyan!";
const std::string Cat::k_init_type = "Cat";

Cat::Cat() : Animal(k_init_type), brain(new Brain())
{
	std::cout << "[" + this->type + "] Cat constructor" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(), brain(new Brain())
{
	std::cout << "[" + this->type + "] Cat copy constructor" << std::endl;
	*this = other;
}

Cat::~Cat()
{
	delete this->brain;
	std::cout << "[" + this->type + "] Cat destructor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
	std::cout << "[" + this->type + "] Cat operator=" << std::endl;
	if (this != &other)
	{
		this->type = other.type;
		if (other.brain != NULL)
			*(this->brain) = *(other.brain);
	}

	return *this;
}

void Cat::makeSound() const
{
	std::cout << "[" << this->type << "] " << k_barks_sound << std::endl;
}

void Cat::showIdeas() const
{
	if (this->brain == NULL)
	{
		std::cout << "[" << this->type << "] don't have Brain" << std::endl;
		return;
	}
	this->brain->showIdeas();
}
