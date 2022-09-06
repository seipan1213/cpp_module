#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <cstddef>

class Span
{
private:
	unsigned int max_len;
	std::vector<int> numbers;

public:
	Span(unsigned int max_len);
	Span(const Span &rhs);
	~Span();
	const Span &operator=(const Span &rhs);

	void addNumber(int number);
	void addRandomNumbers(unsigned int amount);

	template <typename T>
	void addNumberWithIterator(T begin, T end)
	{
		while (begin != end)
		{
			begin++;
			this->addNumber(*begin);
		}
	}

	unsigned int shortestSpan();
	unsigned int longestSpan();
};

#endif