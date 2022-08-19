#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
private:
	static const std::string k_barks_sound;
	static const std::string k_init_type;

protected:
	std::string type;

public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &other);
	Animal &operator=(const Animal &other);
	virtual ~Animal();

	virtual void makeSound() const = 0;
	const std::string getType() const;
};

#endif