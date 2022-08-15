#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y)
{
}

Point::Point(Point const &other)
{
	*this = other;
	return;
}

Point::~Point()
{
}

Point &Point::operator=(const Point &other)
{
	if (this != &other)
	{
		const_cast<Fixed &>(this->x) = other.x;
		const_cast<Fixed &>(this->y) = other.y;
	}
	return *this;
}

float Point::getX(void)
{
	return (this->x.toFloat());
}

float Point::getY(void)
{
	return (this->y.toFloat());
}

float sign(Point p1, Point p2, Point p3)
{
	return (p3.getX() - p2.getX()) * (p1.getY() - p3.getY()) - (p3.getY() - p2.getY()) * (p1.getX() - p3.getX());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	float f1, f2, f3;

	f1 = sign(point, a, b);
	f2 = sign(point, b, c);
	f3 = sign(point, c, a);

	return ((f1 > 0 && f2 > 0 && f3 > 0) || (f1 < 0 && f2 < 0 && f3 < 0));
}