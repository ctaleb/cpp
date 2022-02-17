#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "A new Dog was born." << std::endl;
	this->_type = "Dog";
}

Dog::~Dog(void)
{
	std::cout << "A Dog has died." << std::endl;
}

Dog::Dog(const Dog& src) : Animal(src)
{
	std::cout << "A Dog was cloned." << std::endl;
}

Dog&	Dog::operator=(Dog const& rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof!!" << std::endl;
}
