#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie	*nZomb;

	nZomb = new Zombie(name);
	return (nZomb);
}
