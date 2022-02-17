#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	std::cout << "A new Animal was born." << std::endl;
	this->_type = "Animal";
}

AAnimal::~AAnimal(void)
{
	std::cout << "An Animal has died." << std::endl;
}

AAnimal::AAnimal(const AAnimal& src) : _type(src.getType())
{
	std::cout << "An Animal was cloned." << std::endl;
}

AAnimal&	AAnimal::operator=(AAnimal const& rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

const std::string&	AAnimal::getType(void) const
{
	return (this->_type);
}
