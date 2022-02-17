#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	Zombie::_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << "<" << get_name() << "> has died (again..).";
	std::cout << std::endl;
}

void Zombie::announce(void) const
{
	std::cout << "<" << get_name() << "> BraiiiiiiinnnzzzZ...";
	std::cout << std::endl;
}

std::string	Zombie::get_name(void) const
{
	return (this->_name);
}
