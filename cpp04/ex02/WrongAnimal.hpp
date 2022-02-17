#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class WrongAnimal
{
protected:
	std::string	_type;
public:
	WrongAnimal(void);
	virtual ~WrongAnimal(void);
	WrongAnimal(const WrongAnimal& src);

	WrongAnimal&	operator=(WrongAnimal const& rhs);

	void				makeSound(void) const;
	const std::string&	getType(void) const;
};

#endif
