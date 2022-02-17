#include "Karen.hpp"

int	main(int ac, char **av)
{
	Karen		neighbourKaren;
	std::string	mode;

	if (ac != 2)
	{
		std::cout << "[ Let's avoid Karen for now... ]" << std::endl;
		return (1);
	}
	mode = av[1];
	neighbourKaren.complain(mode);
	return (0);
}
