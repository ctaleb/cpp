#include <iostream>
#include <time.h>
#include <random>
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base*	generate(void)
{
	Base*	ptrBase;

	srand(time(0));
	switch(rand() % 3)
	{
		case 0:
			ptrBase = new A;
			break ;
		case 1:
			ptrBase = new B;
			break ;
		default:
			ptrBase = new C;
	}
	return (ptrBase);
}

void	identify(Base* p)
{
	Base*	ptr;

	ptr = dynamic_cast<A*>(p);
	if (ptr)
	{
		std::cout << "Class is A." << std::endl;
		return ;
	}
	ptr = dynamic_cast<B*>(p);
	if (ptr)
	{
		std::cout << "Class is B." << std::endl;
		return ;
	}
	ptr = dynamic_cast<C*>(p);
	if (ptr)
	{
		std::cout << "Class is C." << std::endl;
		return ;
	}
}

void	identify(Base& p)
{
	Base	identifier;
	try
	{
		identifier = dynamic_cast<A&>(p);
		std::cout << "Class is A." << std::endl;
		return ;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		try
		{
			identifier = dynamic_cast<B&>(p);
			std::cout << "Class is B." << std::endl;
			return ;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			try
			{
				identifier = dynamic_cast<C&>(p);
				std::cout << "Class is C." << std::endl;
				return ;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
}

int	main(void)
{
	Base* ptr = generate();
	Base& ref = *ptr;

	identify(ptr);
	identify(ref);
	delete(ptr);
}
