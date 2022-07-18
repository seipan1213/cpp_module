#include "Contact.hpp"

bool is_num(std::string str)
{
	for (int i = 0; i < (int)str.length(); i++)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (false);
		}
	}
	return (str.length());
}

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
	while (!std::cin.eof() && this->first_name.empty())
	{
		std::cout << "Invalid value\n\nfirst name: ";
		std::getline(std::cin, this->first_name);
	}

	std::cout << "last name: ";
	std::getline(std::cin, this->last_name);
	while (!std::cin.eof() && this->last_name.empty())
	{
		std::cout << "Invalid value\n\nlast name: ";
		std::getline(std::cin, this->last_name);
	}

	std::cout << "nick name: ";
	std::getline(std::cin, this->nick_name);
	while (!std::cin.eof() && this->nick_name.empty())
	{
		std::cout << "Invalid value\n\nnick name: ";
		std::getline(std::cin, this->nick_name);
	}

	std::cout << "phone number: ";
	std::getline(std::cin, this->phone_number);
	while (!std::cin.eof() && !is_num(this->phone_number))
	{
		std::cout << "Invalid value\n\nphone number: ";
		std::getline(std::cin, this->phone_number);
	}

	std::cout << "darkest secret: ";
	std::getline(std::cin, this->darkest_secret);
	while (!std::cin.eof() && this->darkest_secret.empty())
	{
		std::cout << "Invalid value\n\ndarkest secret: ";
		std::getline(std::cin, this->darkest_secret);
	}
}

void Contact::show_contact()
{
	std::cout << "|" << std::setfill(' ') << std::setw(10);
	if (this->first_name.length() > 10)
		std::cout << this->first_name.substr(0, 9) + ".";
	else
		std::cout << this->first_name;
	std::cout << "|" << std::setfill(' ') << std::setw(10);
	if (this->last_name.length() > 10)
		std::cout << this->last_name.substr(0, 9) + ".";
	else
		std::cout << this->last_name;
	std::cout << "|" << std::setfill(' ') << std::setw(10);
	if (this->nick_name.length() > 10)
		std::cout << this->nick_name.substr(0, 9) + ".";
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