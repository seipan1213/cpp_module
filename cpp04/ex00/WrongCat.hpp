#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
private:
	static const std::string k_barks_sound;
	static const std::string k_init_type;

public:
	WrongCat();
	WrongCat(const WrongCat &other);
	WrongCat &operator=(const WrongCat &other);
	~WrongCat();

	void makeSound() const;
};

#endif