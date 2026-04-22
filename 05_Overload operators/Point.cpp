#include "Point.h"
#include <iostream>

void Point::print() const
{
	std::cout << "(" << x << "," << y << ")"; // (2,5)
}

Point Point::operator+(const Point& other)
{
	//Point res; // x = 0,y = 0;
	//res.x = this->x + other.x;
	//res.y = this->y + other.y;
	//return res;
	return Point(this->x + other.x, this->y + other.y);
}

Point Point::operator-(const Point& other)
{
	return Point(this->x - other.x, this->y - other.y);
}

bool Point::operator==(const Point& other)
{
	return this->x == other.x and this->y == other.y;
}

bool Point::operator!=(const Point& other)
{
	//return this->x != other.x or this->y != other.y;
	//return !(this->x == other.x and this->y == other.y);

	return !(*this == other);
}

Point& Point::operator++()
{
	this->x++;
	this->y++;
	return *this;
}

Point Point::operator++(int)
{
	Point tmp(*this); // copy ctor
	//x++;
	//y++;

	++*this; 
	return tmp;
}
