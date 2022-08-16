#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <string>

class WrongAnimal
{
private:
	static const std::string k_barks_sound;
	static const std::string k_init_type;

protected:
	std::string type;

public:
	WrongAnimal();
	explicit WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal &other);
	WrongAnimal &operator=(const WrongAnimal &other);
	virtual ~WrongAnimal();

	void makeSound() const;
	const std::string getType() const;
};

#endif