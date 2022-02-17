#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat b1("Al", 0);

	b1.DownGrade();
	std::cout << b1 << std::endl;
	b1.UpGrade();
	std::cout << b1 << std::endl;
	b1.UpGrade();
	std::cout << b1 << std::endl;

	Bureaucrat b2(b1);
	for (int i = 0; i < 150; i++)
		b2.DownGrade();

	std::cout << b1 << " " << b2 << std::endl;
	b2.DownGrade();
}