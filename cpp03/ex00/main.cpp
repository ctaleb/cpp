#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	robot("PL-42");

	robot.attack("Chaos Machinae");
	robot.setDamage(5);
	robot.attack("Worthless Chump");
	robot.takeDamage(5);
	robot.takeDamage(3);
	robot.beRepaired(1);
	robot.beRepaired(1);
	robot.beRepaired(1);
	robot.beRepaired(1);
	robot.attack("Maximus");
	robot.attack("Eskimo");
	robot.takeDamage(2);
	robot.beRepaired(1);
	robot.beRepaired(1);
	robot.setDamage(0);
	robot.attack("Chaos Machinae");
	robot.beRepaired(10);
	robot.takeDamage(9999);
	robot.beRepaired(1);
	robot.attack("Chaos Machinae");
	return (0);
}
