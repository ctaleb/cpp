#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <string>
# include <iostream>

class Animal
{
protected:
	std::string	_type;
public:
	Animal(void);
	virtual ~Animal(void);
	Animal(const Animal& src);

	Animal&	operator=(Animal const& rhs);

	virtual void		makeSound(void) const;
	const std::string&	getType(void) const;
};

#endif
