#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_p = &str;
	std::string &str_ref = str;

	std::cout << "str     pointer: " << &str << std::endl;
	std::cout << "str_p   pointer: " << str_p << std::endl;
	std::cout << "str_ref pointer: " << &str_ref << std::endl;

	std::cout << "str       value: " << str << std::endl;
	std::cout << "str_p     value: " << *str_p << std::endl;
	std::cout << "str_ref   value: " << str_ref << std::endl;
}