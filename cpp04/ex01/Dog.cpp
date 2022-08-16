#include "Dog.hpp"
#include <iostream>

const std::string Dog::k_barks_sound = "Wan Wan!";
const std::string Dog::k_init_type = "Dog";

Dog::Dog() : Animal(k_init_type), brain(new Brain())
{
	std::cout << "[" + this->type + "] Dog constructor" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(), brain(NULL)
{
	std::cout << "[" + this->type + "] Dog copy constructor" << std::endl;
	*this = other;
}

Dog::~Dog()
{
	delete this->brain;
	std::cout << "[" + this->type + "] Dog destructor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	std::cout << "[" + this->type + "] Dog operator=" << std::endl;
	if (this != &other)
	{
		this->type = other.type;

		if (this->brain != NULL)
			delete this->brain;

		if (other.brain != NULL)
			this->brain = new Brain(*other.brain);
		else
			this->brain = NULL;
	}

	return *this;
}

void Dog::makeSound() const
{
	std::cout << "[" << this->type << "] " << k_barks_sound << std::endl;
}

void Dog::showIdeas() const
{
	if (this->brain == NULL)
	{
		std::cout << "[" << this->type << "] don't have Brain" << std::endl;
		return;
	}
	this->brain->showIdeas();
}