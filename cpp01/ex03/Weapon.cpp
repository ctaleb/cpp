#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{

}

Weapon::~Weapon(void)
{

}

const std::string &Weapon::get_type(void)
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	std::cout << "A " << this->_type << " was picked up." << std::endl;
}
