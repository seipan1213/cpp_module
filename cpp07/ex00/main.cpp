#include "whatever.hpp"
#include <iostream>

int main()
{
	{
		int a = 2;
		int b = 3;
		::swap(a, b);
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
		std::cout << std::endl;
	}
	{
		int a = 10, b = 20;

		std::cout << "INT " << std::endl;
		std::cout << "max: " << max(a, b) << std::endl;
		std::cout << "min: " << min(a, b) << std::endl;
		std::cout << "swap_bf: a: " << a << " b: " << b << std::endl;
		swap(a, b);
		std::cout << "swap_af: a: " << a << " b: " << b << std::endl;
		std::cout << std::endl;
	}
	{
		float a = 5.5f, b = 105.1f;

		std::cout << "Flaot " << std::endl;
		std::cout << "max: " << max(a, b) << std::endl;
		std::cout << "min: " << min(a, b) << std::endl;
		std::cout << "swap_bf: a: " << a << " b: " << b << std::endl;
		swap(a, b);
		std::cout << "swap_af: a: " << a << " b: " << b << std::endl;
		std::cout << std::endl;
	}
	{
		double a = 31.13212, b = 12.3106;

		std::cout << "Double " << std::endl;
		std::cout << "max: " << max(a, b) << std::endl;
		std::cout << "min: " << min(a, b) << std::endl;
		std::cout << "swap_bf: a: " << a << " b: " << b << std::endl;
		swap(a, b);
		std::cout << "swap_af: a: " << a << " b: " << b << std::endl;
		std::cout << std::endl;
	}
	{
		char a = '*', b = '~';

		std::cout << "Char " << std::endl;
		std::cout << "max: " << max(a, b) << std::endl;
		std::cout << "min: " << min(a, b) << std::endl;
		std::cout << "swap_bf: a: " << a << " b: " << b << std::endl;
		swap(a, b);
		std::cout << "swap_af: a: " << a << " b: " << b << std::endl;
		std::cout << std::endl;
	}
}