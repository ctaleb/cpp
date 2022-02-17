#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "A new Cat was born." << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
	{
		this->_brain->setIdea(i, "Where is the mouse?");
	}
}

Cat::~Cat(void)
{
	std::cout << "A Cat has died." << std::endl;
	delete this->_brain;
}

Cat::Cat(const Cat& src)
{
	std::cout << "A Cat was cloned." << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Cat&	Cat::operator=(Cat const& rhs)
{
	*this->_brain = *rhs._brain;
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Nyan~ Nyan~ Nyan~" << std::endl;
}

Brain* const&	Cat::getBrain(void) const
{
	return (this->_brain);
}
