#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void Contact::set_contact()
{
	std::cout << "first name: ";
	std::getline(std::cin, this->first_name);
	std::cout << "last name: ";
	std::getline(std::cin, this->last_name);
	std::cout << "nick name: ";
	std::getline(std::cin, this->nick_name);
	std::cout << "phone number: ";
	std::getline(std::cin, this->phone_number);
	std::cout << "darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
}

void Contact::show_contact()
{
	std::cout << "|" << std::setfill(' ') << std::setw(10);
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) << ".";
	else
		std::cout << this->last_name;
	std::cout << "|" << std::setfill(' ') << std::setw(10);
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) << ".";
	else
		std::cout << this->first_name;
	std::cout << "|" << std::setfill(' ') << std::setw(10);
	if (this->nick_name.length() > 10)
		std::cout << this->nick_name.substr(0, 9) << ".";
	else
		std::cout << this->nick_name;
	std::cout << "|" << std::endl;
}

void Contact::show_contact_detail()
{
	std::cout << "first name: " << this->first_name << std::endl;
	std::cout << "last name: " << this->last_name << std::endl;
	std::cout << "nick name: " << this->nick_name << std::endl;
	std::cout << "phone number: " << this->phone_number << std::endl;
	std::cout << "darkest secret: " << this->darkest_secret << std::endl;
}