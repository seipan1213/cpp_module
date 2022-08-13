#include "Point.hpp"

Point::Point()
{
	this->x = 0;
	this->y = 0;
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
		this->x = other.x;
		this->y = other.y;
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
	return (p1.getX() - p3.getX()) * (p2.getY() - p3.getY()) - (p2.getX() - p3.getX()) * (p1.getY() - p3.getY());
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	bool b1, b2, b3;

	b1 = sign(point, a, b) < 0.0f;
	b2 = sign(point, b, c) < 0.0f;
	b3 = sign(point, c, a) < 0.0f;

	return ((b1 == b2) && (b2 == b3));
}