#ifndef PHONE_BOOK
#define PHONE_BOOK

#include "Contact.hpp"
#define MAX_CONTACT 8

class PhoneBook
{
private:
	int con_index;

public:
	Contact contacts[MAX_CONTACT];

	PhoneBook(void);
	~PhoneBook(void);
	void add_contact();
	void show_contact_list();
	void show_contact_detail(int i);
};

#endif
