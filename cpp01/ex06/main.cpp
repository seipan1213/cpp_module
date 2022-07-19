#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: ARGS" << std::endl;
		return (0);
	}

	Harl harl;
	std::string level = argv[1];
	harl.complain(level);
}