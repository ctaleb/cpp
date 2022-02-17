#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapREF(weapon)
{
	std::cout << this->get_name() << " has arrived with a " << this->_weapREF.get_type();
	std::cout << "." << std::endl;
}

HumanA::~HumanA(void)
{
	std::cout << this->get_name() << " has left." << std::endl;
}

const std::string	&HumanA::get_name(void)
{
	return (this->_name);
}

void	HumanA::attack(void)
{
	std::cout << this->get_name() << " attacks with his " << this->_weapREF.get_type();
	std::cout << "!" << std::endl;
}
