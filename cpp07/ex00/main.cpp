#include "whatever.hpp"

int	main(void)
{
	int	i1 = 5;
	int	i2 = 42;

	::swap(i1, i2);
	std::cout << i1 << std::endl << i2 << std::endl;

	double	d1 = 0.5;
	double	d2 = 0.5;

	std::cout << ::min(d1, d2) << std::endl;

	float	f1 = 42.24;
	float	f2 = 1.9;
	std::cout << "42.24 - 1.9:" << std::endl;
	std::cout << "max " << ::max(f1, f2) << std::endl;
	std::cout << "min " << ::min(f1, f2) << std::endl;

	int	a = 2;
	int	b = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}
