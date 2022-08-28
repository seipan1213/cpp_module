#include "serialization.hpp"

int main(void)
{
	Data data = {"cppmodule"};

	uintptr_t serialized = serialize(&data);
	Data *deserialized = deserialize(serialized);

	std::cout << "data.str: " << data.str << std::endl;
	std::cout << "&data: " << &data << std::endl;
	std::cout << "serialized: " << serialized << std::endl;
	std::cout << "deserialized: " << deserialized << std::endl;

	return 0;
}