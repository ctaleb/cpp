#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		this->sources[i] = NULL;
	std::cout << "A Materia source has been generated." << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->sources[i])
			delete (this->sources[i]);
	}
}

MateriaSource::MateriaSource(MateriaSource const& src)
{
	*this = src;
}

MateriaSource& MateriaSource::operator=(MateriaSource const& rhs)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->sources[i])
			delete (this->sources[i]);
		this->sources[i] = rhs.sources[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* newSource)
{
	for (int i = 0; i < 4; i++)
	{
		if (!this->sources[i])
		{
			std::cout << "A " << newSource->getType() << " Materia was learnt by the Source..." << std::endl;
			this->sources[i] = newSource;
			return ;
		}
	}
	if (!newSource)
	{
		std::cout << "There was nothing to learn..." << std::endl;
		return ;
	}
	std::cout << "The Source was full and the Materia evaporated..." << std::endl;
	delete newSource;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->sources[i] && this->sources[i]->getType() == type)
			return (this->sources[i]->clone());
	}
	return (NULL);
}
