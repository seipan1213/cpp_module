#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <cmath>

int main(void)
{
	Point a(Fixed(3), Fixed(3));
	Point b(Fixed(3), Fixed(3));
	Point c(Fixed(3), Fixed(3));

	Point point(Fixed(3), Fixed(3));

	if (bsp(a, b, c, point) == true)
		std::cout << "In" << std::endl;
	else
		std::cout << "Out" << std::endl;
}