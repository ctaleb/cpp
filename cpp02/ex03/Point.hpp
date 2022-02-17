#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point
{
private:
	const Fixed	_x;
	const Fixed	_y;
public:
	Point(void);
	~Point(void);
	Point(const float x, const float y);
	Point(const Point& src);

	const Point&	operator=(const Point& rhs);

	const Fixed&	getX(void) const;
	const Fixed&	getY(void) const;
};

bool	bsp(const Point a, const Point b, const Point c, const Point point);

#endif
