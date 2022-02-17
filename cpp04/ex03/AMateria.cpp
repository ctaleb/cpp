#include "AMateria.hpp"

AMateria::AMateria(void)
{
	this->type = "Void";
	std::cout << "An attribute-less Materia has materialized in our world!" << std::endl;
}

AMateria::AMateria(std::string const& type)
{
	this->type = type;
	std::cout << "A Materia of " << this->type << " has materialized in our world!" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "A Materia was forever lost to the nether." << std::endl;
}

AMateria::AMateria(AMateria const& src)
{
	*this = src;
}

AMateria&	AMateria::operator=(AMateria const& rhs)
{
	this->type = rhs.getType();
	return (*this);
}

std::string const&	AMateria::getType(void) const
{
	return(this->type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "The " << this->type << "Materia was used on " << target.getName() << "!" << std::endl;
}
