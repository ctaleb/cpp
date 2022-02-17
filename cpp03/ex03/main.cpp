#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	robot("luvBox");

	robot.attack("Chaos Machinae");
	std::cout << "hp:" << robot.getHitPoints() << std::endl;
	std::cout << "ep:" << robot.getenergyPoints() << std::endl;
	std::cout << "ad:" << robot.getDamage() << std::endl;
	robot.whoAmI();
	return (0);
}
