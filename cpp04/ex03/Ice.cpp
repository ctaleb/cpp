#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "An ice Materia has appeared." << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "An ice Materia has melted away..." << std::endl;
}

Ice::Ice(Ice const& src)
{
	*this = src;
}

Ice&	Ice::operator=(Ice const& rhs)
{
	this->type = rhs.getType();
	return (*this);
}

Ice* Ice::clone(void) const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
