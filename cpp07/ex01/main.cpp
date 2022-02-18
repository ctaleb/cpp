#include "iter.hpp"

int	main(void)
{
	int iray[5];
	int	j = 7;

	for (int i = 0; i < 5; i++)
	{
		iray[i] = j++;
	}
	iter(iray, 5, iterator);
	std::cout << std::endl;

	std::string	sray[9] =
	{
		"Hi",
		", "
		"my ",
		"name ",
		"is ",
		"Batman. ",
		"I'll ",
		"save ",
		"you! ",
		";)"
	};
	iter(sray, 9, iterator);
	std::cout << std::endl;

	return (0);
}