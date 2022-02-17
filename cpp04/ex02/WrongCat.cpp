#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "A new WrongCat was born." << std::endl;
	this->_type = "WrongCat";
}

WrongCat::~WrongCat(void)
{
	std::cout << "A WrongCat has died." << std::endl;
}

WrongCat::WrongCat(const WrongCat& src) : WrongAnimal(src)
{
	std::cout << "A WrongCat was cloned." << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const& rhs)
{
	this->_type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Nyan~ Nyan~ Nyan~" << std::endl;
}
