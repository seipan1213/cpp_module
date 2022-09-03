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
	unsigned int shortestSpan();
	unsigned int longestSpan();
};

#endif