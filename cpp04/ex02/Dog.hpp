#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog: public AAnimal
{
private:
	Brain		*_brain;
public:
	Dog(void);
	~Dog(void);
	Dog(const Dog& src);

	Dog&	operator=(Dog const& rhs);

	void			makeSound(void) const;
	Brain* const&	getBrain(void) const;
};

#endif
