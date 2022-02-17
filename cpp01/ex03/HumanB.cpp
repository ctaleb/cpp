#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapPTR(NULL)
{
	// this->_weapPTR = NULL;
	std::cout << this->_name << " has arrived." << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << this->_name << " has left." << std::endl;
}

const std::string	&HumanB::get_name(void)
{
	return (this->_name);
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapPTR = &weapon;
	std::cout << this->_name << " has picked up a " << this->_weapPTR->get_type();
	std::cout << std::endl;
}

void	HumanB::attack(void)
{
	if (!this->_weapPTR)
		std::cout << this->_name << " attacks with his punches!" << std::endl;
	else
	{
		std::cout << this->_name << " attacks with his " << this->_weapPTR->get_type();
		std::cout << std::endl;
	}
}
