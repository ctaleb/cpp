#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	robot("PL-42");
	ScavTrap	robot2("Jojo");
	ClapTrap	robot3("ManuBot");

	robot.attack("Chaos Machinae");
	robot2.attack("SeoiLee");
	robot3.attack("Bjorg");
	robot.highFivesGuys();
	robot.takeDamage(1000);
	robot.highFivesGuys();
	robot.beRepaired(1000);
	robot.attack("Lucas");
	return (0);
}
