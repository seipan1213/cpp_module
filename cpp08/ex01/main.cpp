#include "Span.hpp"
#include <iostream>
#include <ctime>

int main()
{
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
		srand(std::time(NULL));
		sp.addNumber(-10000);
		for (int i = 0; i < 10000; i++)
		{
			sp.addNumber(rand());
		}
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