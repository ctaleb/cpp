#include "Array.hpp"

int	main(void)
{
	Array<std::string>	sRay;
	Array<int>			iRay(5);

	std::cout << *sRay.getArray() << "\t" << sRay.getArray() << std::endl;
	std::cout << *iRay.getArray() << "\t" << iRay.getArray() << std::endl;
	std::cout << iRay[2] << std::endl;

	iRay[0] = 7;
	std::cout << iRay[0] << std::endl;
	try
	{
		iRay[-1];
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}
