#include "PhoneBook.hpp"
#include <string>
#include <iostream>

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
			pb.search_contact();
		}
		else if (type == "EXIT")
		{
			return (0);
		}
		else
		{
			std::cout << "Not found CMD" << std::endl;
		}
		std::cout << "\nCMD: ";
	}
}
