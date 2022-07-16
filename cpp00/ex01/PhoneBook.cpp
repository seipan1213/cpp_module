#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->con_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact()
{
	this->contacts[this->con_index++].set_contact();
	if (this->con_index >= MAX_CONTACT)
		this->con_index = 0;
}

void PhoneBook::show_contact_list()
{
	for (int i = 0; i < MAX_CONTACT; i++)
	{
		std::cout << "|" << std::setfill(' ') << std::setw(10);
		std::cout << i + 1;
		this->contacts[i].show_contact();
	}
}

void PhoneBook::show_contact_detail(int i)
{
	std::cout << std::endl
			  << "index: " << i << std::endl;
	this->contacts[i - 1].show_contact_detail();
}
