#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point
{
private:
	Fixed x;
	Fixed y;

public:
	Point();
	Point(const Fixed x, const Fixed y);
	Point(Point const &other);
	~Point();

	Point &operator=(const Point &other);

	float getX(void);
	float getY(void);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif