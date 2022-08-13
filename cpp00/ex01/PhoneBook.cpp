#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->con_index = 0;
	this->registered_num = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add_contact()
{
	this->contacts[this->con_index++].set_contact();
	registered_num++;
	registered_num = std::min(registered_num, MAX_CONTACT);
	if (this->con_index >= MAX_CONTACT)
		this->con_index = 0;
}

void PhoneBook::search_contact()
{
	std::string index;
	this->show_contact_list();
	if (registered_num == 0)
	{
		std::cout << "Not Registered" << std::endl;
		return;
	}
	std::cout << "Search index: ";
	std::getline(std::cin, index);
	while (!std::cin.eof() && ((index.length() != 1 || !(index[0] - '0' >= 1 && index[0] - '0' <= registered_num))))
	{
		std::cout << "Invalid index\nSearch index: ";
		std::getline(std::cin, index);
	}
	if (!std::cin.eof())
		this->show_contact_detail(index[0] - '0');
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
