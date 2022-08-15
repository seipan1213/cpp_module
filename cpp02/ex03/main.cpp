#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <cmath>

int main(void)
{
	/**
	 * Point a(Fixed(0), Fixed(0));
	 * Point b(Fixed(0), Fixed(0));
	 * Point c(Fixed(0), Fixed(0));
	 * Point point(Fixed(0), Fixed(0));
	 */

	/** edge
	 * Point a(Fixed(0), Fixed(0));
	 * Point b(Fixed(0), Fixed(1));
	 * Point c(Fixed(1), Fixed(0));
	 * Point point(Fixed(1), Fixed(0));
	 */

	/**  vertex
	 * Point a(Fixed(0), Fixed(0));
	 * Point b(Fixed(0), Fixed(2));
	 * Point c(Fixed(2), Fixed(0));
	 * Point point(Fixed(1), Fixed(0));
	 */

	Point a(Fixed(0), Fixed(0));
	Point b(Fixed(1), Fixed(1));
	Point c(Fixed(2), Fixed(0));

	Point point(Fixed(0.6f), Fixed(0.5f));

	std::cout << (bsp(a, b, c, point) ? "IN" : "OUT") << std::endl;
}