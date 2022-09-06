#include "Span.hpp"
#include <stdexcept>
#include <algorithm>

Span::Span(unsigned int max_len) : max_len(max_len)
{
}

Span::Span(const Span &rhs)
{
	*this = rhs;
}

Span::~Span()
{
}

const Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->numbers = rhs.numbers;
		this->max_len = rhs.max_len;
	}

	return *this;
}

void Span::addNumber(int number)
{
	if (this->numbers.size() >= this->max_len)
	{
		throw std::out_of_range("out of range");
	}
	this->numbers.push_back(number);
}

void Span::addRandomNumbers(unsigned int amount)
{
	for (unsigned int i = 0; i < amount; i++)
	{
		this->addNumber(rand());
	}
}

unsigned int Span::shortestSpan()
{
	if (this->numbers.size() <= 1)
	{
		throw std::logic_error("cant find shortestSpan");
	}

	unsigned int min_diff = this->longestSpan();
	std::sort(this->numbers.begin(), this->numbers.end());

	for (unsigned int i = 0; i < this->numbers.size() - 1; i++)
	{
		unsigned int diff = this->numbers[i + 1] - this->numbers[i];
		min_diff = std::min(diff, min_diff);
	}
	return min_diff;
}

unsigned int Span::longestSpan()
{
	if (this->numbers.size() <= 1)
	{
		throw std::logic_error("cant find longestSpan");
	}

	std::sort(this->numbers.begin(), this->numbers.end());
	unsigned int max_diff = this->numbers[this->numbers.size() - 1] - this->numbers[0];
	return max_diff;
}