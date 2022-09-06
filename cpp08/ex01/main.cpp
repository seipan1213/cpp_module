#include "Span.hpp"
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>

int main()
{
	{
		srand(time(NULL));
		std::vector<int> v;
		for (int i = 0; i < 10000; i++)
		{
			v.push_back(rand());
		}
		Span sp = Span(10000);
		sp.addNumberWithIterator(v.begin(), v.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		Span sp = Span(2);
		sp.addNumber(2147483647);
		sp.addNumber(-2147483648);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		Span sp = Span(10);
		for (int i = -5; i < 5; i++)
		{
			sp.addNumber(i);
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		Span sp = Span(10001);

		sp.addNumber(-10000);
		sp.addRandomNumbers(10000);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		Span sp1 = Span(10);
		for (int i = -5; i < 5; i++)
		{
			sp1.addNumber(i);
		}

		Span sp2(sp1);
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
		std::cout << std::endl;
	}
	{
		try
		{
			Span sp = Span(0);
			sp.addNumber(0);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
		std::cout << std::endl;
	}
	{
		try
		{
			Span sp = Span(1);
			sp.addNumber(100);
			sp.addNumber(200);
		}
		catch (const std::exception &e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}