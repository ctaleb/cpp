#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	robot("PL-42");
	ScavTrap	robot2;
	ClapTrap	robot3("ManuBot");

	robot.attack("Chaos Machinae");
	robot2.attack("SeoiLee");
	robot3.attack("Bjorg");
	robot.guardGate();
	robot.beRepaired(50);
	robot.takeDamage(500);
	robot.guardGate();
	robot2.guardGate();
	return (0);
}
