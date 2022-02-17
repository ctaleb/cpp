#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "A cure Materia has appeared." << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "An cure Materia has dried up..." << std::endl;
}

Cure::Cure(Cure const& src)
{
	*this = src;
}

Cure&	Cure::operator=(Cure const& rhs)
{
	this->type = rhs.getType();
	return (*this);
}

Cure* Cure::clone(void) const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
