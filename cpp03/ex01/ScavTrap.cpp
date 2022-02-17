#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(100, 50, 20)
{
	std::cout << "\33[1;32mDefault ScavTrap constructor called.\33[0;38m" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "\33[1;32mScavTrap destructor called.\33[0;38m" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "\33[1;32mNamed ScavTrap constructor called.\33[0;38m" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const& src) : ClapTrap(src.getName(), src.getHitPoints(), src.getenergyPoints(), src.getDamage())
{
	std::cout << "\33[1;32mCopy ScavTrap constructor called.\33[0;38m" << std::endl;
}

ScavTrap&	ScavTrap::operator=(ScavTrap const& rhs)
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getenergyPoints();
	this->_attackDamage = rhs.getDamage();
	return (*this);
}

void	ScavTrap::attack(std::string target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "\33[1;32mScavTrap " << this->_name <<  " is broken and cannot attack!";
		std::cout << "\33[0;38m" << std::endl;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << "\33[1;32mScavTrap " << this->_name << " has no energy to attak!";
		std::cout << "\33[0;38m" << std::endl;
	}
	else
	{
		std::cout << "\33[1;32mScavTrap " << this->_name << " is scaving ";
		std::cout << target << " for " << this->_attackDamage << " damage!\33[0;38m";
		std::cout << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "\33[1;32mScavTrap " << this->_name << " is now in Gate keeper mode.";
		std::cout << "\33[0;38m" << std::endl;
	}
	else
	{
		std::cout << "\33[1;32mScavTrap " << this->_name << " is unable to do that!";
		std::cout << "\33[0;38m" << std::endl;
	}
}
