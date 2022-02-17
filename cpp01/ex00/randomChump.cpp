#include "Zombie.hpp"

void		randomChump(std::string name)
{
	Zombie rZomb = Zombie(name);
	
	rZomb.announce();
}
