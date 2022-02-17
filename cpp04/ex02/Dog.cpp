#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "A new Dog was born." << std::endl;
	this->_type = "Dog";
	this->_brain = new Brain();
	for (int i = 100; i < 100; i++)
	{
		this->_brain->setIdea(i, "Where is the cat?");
	}
}

Dog::~Dog(void)
{
	std::cout << "A Dog has died." << std::endl;
	delete this->_brain;
}

Dog::Dog(const Dog& src)
{
	std::cout << "A Dog was cloned." << std::endl;
	this->_brain = new Brain();
	*this = src;
}

Dog&	Dog::operator=(Dog const& rhs)
{
	*this->_brain = *rhs._brain;
	this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof!!" << std::endl;
}

Brain* const&	Dog::getBrain(void) const
{
	return (this->_brain);
}
