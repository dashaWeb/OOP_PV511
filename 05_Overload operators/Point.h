#pragma once

class Point
{
public:
	void setX(const double& x);
	void setY(const double& y);
	double getY() const;
	double getX() const;

	// ctor
	Point() = default;
	Point(const double& x);
	Point(const double& x, const double& y);

	void print() const;

	// binary operators, +, -, ==, !=
	Point operator +(const Point& other); //res{Point} <- a{this} + b{other}; this + other
	Point operator -(const Point& other); //res{Point} <- a{this} + b{other}; this + other
	bool operator ==(const Point& other); //res{bool} <- a{this} + b{other}; this + other
	bool operator !=(const Point& other); //res{bool} <- a{this} + b{other}; this + other


	// ++unary
	Point& operator++(); // this - вже прийшов, префіксна форма
	Point operator++(int); // this - вже прийшов, постфіксна форма має приймати фіктивний параметр

private:
	double x = 0, y = 0;
};

inline void Point::setX(const double& x)
{
	this->x = x;
}

inline void Point::setY(const double& y)
{
	this->y = y;
}

inline double Point::getY() const
{
	return this->y;
}

inline double Point::getX() const
{
	return this->x;
}

inline Point::Point(const double& x)
	:Point(x, 0){}

inline Point::Point(const double& x, const double& y)
	:x{ x }, y{y}{}


