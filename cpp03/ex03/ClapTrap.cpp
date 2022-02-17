#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("Tinfoil Box"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Default ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Named ClapTrap constructor called." << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap destructor called." << std::endl;
}

ClapTrap::ClapTrap(int hp, int ep, int ad) : _name("Tinfoil Box"), _hitPoints(hp), _energyPoints(ep), _attackDamage(ad)
{
	std::cout << "Default ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hp, int ep, int ad) : _name(name), _hitPoints(hp), _energyPoints(ep), _attackDamage(ad)
{
	std::cout << "Named ClapTrap constructor called." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const& src)
{
	std::cout << "Copy ClapTrap constructor called." << std::endl;
	*this = src;
}

ClapTrap&	ClapTrap::operator=(ClapTrap const& rhs)
{
	this->_name = rhs.getName();
	return (*this);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " is broken and cannot attack!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy to attack!" << std::endl;
	else
	{
		this->_energyPoints--;
		std::cout << this->_name << " attacks " << target << ", ";
		std::cout << "causing " << this->_attackDamage << " points of damage!";
		std::cout << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " is already broken!" << std::endl;
	else
	{
		std::cout << this->_name << " is taking " << amount << " points of damage!";
		std::cout << std::endl;
		this->_hitPoints -= amount;
		if (this->_hitPoints <= 0)
		{
			this->_hitPoints = 0;
			std::cout << this->_name << " is broken beyond repair!" << std::endl;
		}
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " is broken and cannot repair itself!" << std::endl;
	else if (this->_energyPoints <= 0)
		std::cout << this->_name << " has no energy to repair!" << std::endl;
	else
	{
		this->_energyPoints -= 1;
		std::cout << this->_name << " is repairing itself for " << amount;
		std::cout << " hit points." << std::endl;
		this->_hitPoints += amount;
	}
}

const std::string&	ClapTrap::getName(void) const
{
	return (this->_name);
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

void	ClapTrap::setHitPoints(unsigned int nb)
{
	this->_hitPoints = nb;
}

int	ClapTrap::getenergyPoints(void) const
{
	return (this->_energyPoints);
}

void	ClapTrap::setenergyPoints(unsigned int nb)
{
	this->_energyPoints = nb;
}

int	ClapTrap::getDamage(void) const
{
	return (this->_attackDamage);
}

void	ClapTrap::setDamage(unsigned int nb)
{
	this->_attackDamage = nb;
}
