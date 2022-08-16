#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain
{
private:
	static const int k_idea_size = 100;
	std::string ideas[k_idea_size];

public:
	Brain();
	Brain(const Brain &other);
	~Brain();
	Brain &operator=(const Brain &other);

	void showIdeas() const;
};

#endif