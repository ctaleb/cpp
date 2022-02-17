#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(100, 100, 30)
{
	std::cout << "\33[1;31mDefault FragTrap constructor called.\33[0;38m" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "\33[1;31mFragTrap destructor called.\33[0;38m" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "\33[1;31mNamed FragTrap constructor called.\33[0;38m" << std::endl;
}

FragTrap::FragTrap(FragTrap const& src) : ClapTrap(src.getName(), src.getHitPoints(), src.getenergyPoints(), src.getDamage())
{
	std::cout << "\33[1;31mCopy FragTrap constructor called.\33[0;38m" << std::endl;
}

FragTrap&	FragTrap::operator=(FragTrap const& rhs)
{
	this->_name = rhs.getName();
	this->_hitPoints = rhs.getHitPoints();
	this->_energyPoints = rhs.getenergyPoints();
	this->_attackDamage = rhs.getDamage();
	return (*this);
}

void	FragTrap::attack(std::string target)
{
	if (this->_hitPoints <= 0)
	{
		std::cout << "\33[1;31mFragTrap " << this->_name <<  " is broken and cannot attack!";
		std::cout << "\33[0;38m" << std::endl;
	}
	else if (this->_energyPoints <= 0)
	{
		std::cout << "\33[1;31mFragTrap " << this->_name << " has no energy to attak!";
		std::cout << "\33[0;38m" << std::endl;
	}
	else
	{
		this->_energyPoints--;
		std::cout << "\33[1;31mFragTrap " << this->_name << " is fragging " << target << ", ";
		std::cout << "causing " << this->_attackDamage << " points of damage!";
		std::cout << "\33[0;38m" << std::endl;
	}
}

void	FragTrap::highFivesGuys(void)
{
	if (this->_energyPoints > 0 && this->_hitPoints > 0)
	{
		std::cout << "\33[1;31m" << this->_name << ": Who wants to high five?! :D\33[0;38m";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "\33[1;31mFragTrap " << this->_name << " is unable to do that!";
		std::cout << "\33[0;38m" << std::endl;
	}
}
