#ifndef MUTANT_STACK_HPP
#define MUTANT_STACK_HPP

#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;

	MutantStack();
	MutantStack(const MutantStack &rhs);
	~MutantStack();
	const MutantStack &operator=(const MutantStack &rhs);

	iterator begin();
	iterator end();
};

#include "MutantStack.tpp"

#endif