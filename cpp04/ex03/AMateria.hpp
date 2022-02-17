#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	type;
	AMateria(void);
public:
	AMateria(std::string const& type);
	virtual ~AMateria(void);
	AMateria(AMateria const& src);

	AMateria&	operator=(AMateria const& rhs);

	std::string const&	getType(void) const;

	virtual AMateria* clone(void) const = 0;
	virtual void use(ICharacter& target);
};

#endif
