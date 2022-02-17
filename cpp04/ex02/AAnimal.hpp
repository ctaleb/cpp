#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class AAnimal
{
protected:
	std::string	_type;
public:
	AAnimal(void);
	virtual ~AAnimal(void);
	AAnimal(const AAnimal& src);

	AAnimal&	operator=(AAnimal const& rhs);

	virtual void		makeSound(void) const = 0;
	const std::string&	getType(void) const;
};

#endif
