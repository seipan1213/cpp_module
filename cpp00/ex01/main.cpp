#include "PhoneBook.hpp"
#include <string>
#include <iostream>

void search(PhoneBook *pb)
{
	std::string index;
	(*pb).show_contact_list();
	std::cout << "Search index: ";
	while (std::getline(std::cin, index) && (index.length() != 1 || !(index[0] - '0' >= 1 && index[0] - '0' <= MAX_CONTACT)))
	{
		std::cout << "Invalid index\nSearch index: ";
		std::getline(std::cin, index);
	}
	if (!std::cin.eof())
		(*pb).show_contact_detail(index[0] - '0');
}

int main()
{
	std::string type;
	PhoneBook pb;

	std::cout << "CMD: ";
	while (std::getline(std::cin, type))
	{
		if (type == "ADD")
		{
			pb.add_contact();
		}
		else if (type == "SEARCH")
		{
			search(&pb);
		}
		else if (type == "EXIT")
		{
			return (0);
		}
		else
		{
			std::cout << "Not found CMD" << std::endl;
		}
		std::cout << "CMD: ";
	}
}