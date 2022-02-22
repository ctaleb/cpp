#include "Span.hpp"

int	main(void)
{
	Span	tmp(40);

	tmp.fillUp();
	tmp.printSpan();
	std::cout << "-------------------" << std::endl;
	try
	{
		tmp.addNumber(5);
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "-------------------" << std::endl;
	Span	dst(tmp);
	dst.printSpan();
	std::cout << "-------------------" << std::endl;
	Span	mirror(2);
	mirror = dst;
	mirror.printSpan();
	std::cout << "-------------------" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "-------------------" << std::endl;
	return (0);
}