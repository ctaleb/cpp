#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "A brain has started thinking." << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "A brain has stopped thinking." << std::endl;
}

Brain::Brain(const Brain& src)
{
	*this = src;
}

Brain&	Brain::operator=(Brain const& rhs)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = rhs._ideas[i];
	return (*this);
}

void	Brain::setIdea(int i, std::string idea)
{
	this->_ideas[i] = idea;
}

std::string const&	Brain::getIdea(int i) const
{
	return (this->_ideas[i]);
}
