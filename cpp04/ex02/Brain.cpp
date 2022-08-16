#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	for (int i = 0; i < Brain::k_idea_size; i++)
	{
		ideas[i] = 'A' + (i % 26);
	}
	std::cout << "[" << this << "] Brain constructor" << std::endl;
}

Brain::Brain(const Brain &other)
{
	std::cout << "[" << this << "] Brain copy constructor" << std::endl;
	*this = other;
}

Brain::~Brain()
{
	std::cout << "[" << this << "] Brain destructor" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
	std::cout << "[" << this << "] Brain operator=" << std::endl;
	if (this != &other)
	{
		for (int i = 0; i < k_idea_size; i++)
		{
			ideas[i] = other.ideas[i];
		}
	}

	return *this;
}

void Brain::showIdeas() const
{
	std::cout << "[" << this << "] showIdeas" << std::endl;
	for (int i = 0; i < k_idea_size; i++)
	{
		std::cout << this->ideas[i] << std::endl;
	}
	std::cout << std::endl;
}
