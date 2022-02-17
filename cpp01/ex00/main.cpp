#include "Zombie.hpp"

int	main(void)
{
	randomChump("John");
	randomChump("John");
	randomChump("John");

	Zombie kenedy("Kenedy");
	kenedy.announce();

	randomChump("StartKiller");

	Zombie *lafayette = newZombie("Lafayette");
	lafayette->announce();
	delete lafayette;
	return (0);
}
