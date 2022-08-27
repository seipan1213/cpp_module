#include "Convert.hpp"
#include <string>
#include <iostream>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Invalid argumets." << std::endl;
		return 0;
	}

	Convert cov(argv[1]);
	cov.showConvert();
}