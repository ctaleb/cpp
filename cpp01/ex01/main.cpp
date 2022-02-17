#include "Zombie.hpp"

int	main(void)
{
	Zombie *zHorde;

	zHorde = zombieHorde(5, "Boeurk");
	delete[] zHorde;
	return (0);
}
