#include "Span.hpp"
#include <stdexcept>
#include <algorithm>
#include <limits>

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
		unsigned int diff = std::abs(this->numbers[i] - this->numbers[i + 1]);
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
	unsigned int max_diff = std::abs(this->numbers[this->numbers.size() - 1] - this->numbers[0]);
	return max_diff;
}