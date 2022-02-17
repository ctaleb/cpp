#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "\33[1;37mDefault DiamondTrap constructor called.\33[0;38m" << std::endl;
	this->_name = "Solar Panel";
	this->_hitPoints = FragTrap::hp_init;
	this->_energyPoints = ScavTrap::ep_init;
	this->_attackDamage = FragTrap::ad_init;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "\33[1;37mDiamondTrap destructor called.\33[0;38m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	std::cout << "\33[1;37mNamed DiamondTrap constructor called.\33[0;38m" << std::endl;
	this->_name = name;
	this->_hitPoints = FragTrap::hp_init;
	this->_energyPoints = ScavTrap::ep_init;
	this->_attackDamage = FragTrap::ad_init;
}

DiamondTrap::DiamondTrap(DiamondTrap const& src)
{
	std::cout << "\33[1;37mCopy DiamondTrap constructor called.\33[0;38m" << std::endl;
	*this = src;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& rhs)
{
	this->_name = rhs.getName();
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "ClapName: " << ClapTrap::_name << std::endl;
	std::cout << "RealName: " << this->_name << std::endl;
}
