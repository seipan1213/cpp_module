#ifndef EASYFIND_TPP
#define EASYFIND_TPP

#include <stdexcept>

template <typename T>
typename T::iterator easyfind(T &container, int num)
{
	typename T::iterator it = std::find(container.begin(), container.end(), num);
	if (it == container.end())
	{
		throw std::logic_error("The number is not found.");
	}
	return (it);
}

#endif
