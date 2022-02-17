#include "Point.hpp"

int	getPos(const Point a, const Point b, const Point point)
{
	Fixed	d;

	d = ((b.getX() - a.getX()) * (point.getY() - a.getY())) \
		- ((b.getY() - a.getY()) * (point.getX() - a.getX()));
	return (d.toInt());
}

int	comparePos(const Point a, const Point b, const Point pointA, const Point pointB)
{
	int	A;
	int	B;

	A = getPos(a, b, pointA);
	B = getPos(a, b, pointB);
	if (!A)
		return (-1);
	else if ((A < 0 && B < 0) || (A > 0 && B > 0))
		return (1);
	else
		return (0);
}

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	int	A;
	int	B;
	int	C;

	C = comparePos(a, b, point, c);
	B = comparePos(a, c, point, b);
	A = comparePos(b, c, point, a);
	if (A == 1 && B == 1 && C == 1)
	{
		std::cout << "The point is inside the a b c triangle." << std::endl;
		return (true);
	}
	else
	{
		std::cout << "The point is outside the a b c triangle." << std::endl;
		return (false);
	}
}
