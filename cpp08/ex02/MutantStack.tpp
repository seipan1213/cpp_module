#ifndef MUTANT_STACK_TPP
#define MUTANT_STACK_TPP

#include <iterator>

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &rhs) : std::stack<T>(rhs)
{
	*this = rhs;
}

template <typename T>
MutantStack<T>::~MutantStack()
{
}

template <typename T>
const MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &rhs)
{
	if (this != &rhs)
	{
		this->c = rhs.c;
	}

	return *this;
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin()
{
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end()
{
	return this->c.end();
}

#endif