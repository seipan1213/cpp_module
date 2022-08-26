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

	std::cout << "toChar: " << cov.toChar() << std::endl;
	std::cout << "toInt: " << cov.toInt() << std::endl;
	std::cout << "toFloat: " << cov.toFloat() << std::endl;
	std::cout << "toDouble: " << cov.toDouble() << std::endl;
}