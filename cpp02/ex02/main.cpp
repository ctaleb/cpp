#include <iostream>
#include "Fixed.hpp"

int main(void) {
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "a:" << std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << "b:" << std::endl;
	std::cout << b << std::endl;

	if (a >= b)
		std::cout << "a >= b ? true" << std::endl;
	else
		std::cout << "a >= b ? false" << std::endl;
	std::cout << "max(a, b):" << Fixed::max(a, b) << std::endl;

	Fixed	c = a + b;

	std::cout << "c:" << c << std::endl;
	std::cout << "max(++a + b, c):" << Fixed::max(++a + b, c) << std::endl;

	Fixed	d = 2;

	c = c * d;
	std::cout << "c:" << c << std::endl;

	return (0);
}