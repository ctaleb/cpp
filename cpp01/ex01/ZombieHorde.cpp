#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie	*nZombHorde;
	
	nZombHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		nZombHorde[i].set_name(name);
		nZombHorde[i].announce();
	}
	return (nZombHorde);
}
