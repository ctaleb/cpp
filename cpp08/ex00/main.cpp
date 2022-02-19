#include "easyfind.hpp"

int main(void)
{
	std::vector<int>	lst;
	int					n;
	int					f;

	lst.push_back(5);
	lst.push_back(7);
	lst.push_back(3);
	lst.push_back(1);
	lst.push_back(9);
	srand(time(0));
	try
	{
		f = rand() % 10;
		n = easyfind(lst, f);
		std::cout << "Occurence " << lst[n] << " found at index " << n << "." << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << f << " " << e.what() << std::endl;
	}
	return (0);
}