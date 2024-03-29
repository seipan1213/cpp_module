#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	static const std::string k_barks_sound;
	static const std::string k_init_type;
	Brain *brain;

public:
	Cat();
	Cat(const Cat &other);
	Cat &operator=(const Cat &other);
	virtual ~Cat();

	void makeSound() const;
	void showIdeas() const;
};

#endif