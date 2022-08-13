#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;

public:
	Contact();
	~Contact();
	void set_contact();
	void show_contact();
	void show_contact_detail();
};

#endif
