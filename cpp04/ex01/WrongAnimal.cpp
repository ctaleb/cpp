#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "A new WrongAnimal was born." << std::endl;
	this->_type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "A WrongAnimal has died." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& src) : _type(src.getType())
{
	std::cout << "A WrongAnimal was cloned." << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(WrongAnimal const& rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "-- wrong animal sound --" << std::endl;
}

const std::string&	WrongAnimal::getType(void) const
{
	return (this->_type);
}
