#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	// std::cout << "Default Point constructor called." << std::endl;
}

Point::~Point(void)
{
	// std::cout << "Point destructor called." << std::endl;
}

Point::Point(const float x, const float y) : _x(x), _y(y)
{
	// std::cout << "Point constructor called." << std::endl;
}

Point::Point(const Point& src) : _x(src._x), _y(src._y)
{
	// std::cout << "Copy constructor called." << std::endl;
}

const Point&	Point::operator=(const Point& rhs)
{
	(void)rhs;

	return (*this);
}

const Fixed&	Point::getX(void) const
{
	return (this->_x);
}

const Fixed&	Point::getY(void) const
{
	return (this->_y);
}
