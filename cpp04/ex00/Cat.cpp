#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "A new Cat was born." << std::endl;
	this->_type = "Cat";
}

Cat::~Cat(void)
{
	std::cout << "A Cat has died." << std::endl;
}

Cat::Cat(const Cat& src) : Animal(src)
{
	std::cout << "A Cat was cloned." << std::endl;
}

Cat&	Cat::operator=(Cat const& rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Nyan~ Nyan~ Nyan~" << std::endl;
}
