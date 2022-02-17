#include "Point.hpp"

int	main(void)
{
	Point	a(0, 0);
	Point	b(0, 5);
	Point	c(5, 0);
	Point	point1(2, 2);
	Point	point2(5.5, 5.1);
	Point	point3(0.5, 2);
	Point	point4(0, 3);
	Point	point5(0, 0);

	bsp(a, b, c, point1);
	bsp(a, b, c, point2);
	bsp(a, b, c, point3);
	bsp(a, b, c, point4);
	bsp(a, b, c, point5);
}
