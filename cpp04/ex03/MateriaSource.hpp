#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	AMateria*	sources[4];
public:
	MateriaSource(void);
	~MateriaSource(void);
	MateriaSource(MateriaSource const& src);

	MateriaSource& operator=(MateriaSource const& rhs);

	void		learnMateria(AMateria* newSource);
	AMateria*	createMateria(std::string const& type);
};

#endif
