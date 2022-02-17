#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "A new Animal was born." << std::endl;
	this->_type = "Animal";
}

Animal::~Animal(void)
{
	std::cout << "An Animal has died." << std::endl;
}

Animal::Animal(const Animal& src) : _type(src.getType())
{
	std::cout << "An Animal was cloned." << std::endl;
}

Animal&	Animal::operator=(Animal const& rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "-- random animal sound --" << std::endl;
}

const std::string&	Animal::getType(void) const
{
	return (this->_type);
}
