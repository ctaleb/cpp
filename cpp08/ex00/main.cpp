#include "easyfind.hpp"

int main(void)
{
	std::vector<int>	lst;
	std::vector<int>::const_iterator	n;
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
		std::cout << "Occurence " << f << " found!" << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << f << " " << e.what() << std::endl;
	}
	lst.push_back(1);
	n = easyfind(lst, 1);
	std::cout << "Occurence " << *n << " found!" << std::endl;
	n++;
	std::cout << "     followed by " << *n << std::endl;
	return (0);
}