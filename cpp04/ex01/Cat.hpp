#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat: public Animal
{
private:
	Brain		*_brain;
public:
	Cat(void);
	~Cat(void);
	Cat(const Cat& src);

	Cat&	operator=(Cat const& rhs);

	void			makeSound(void) const;
	Brain* const&	getBrain(void) const;
};

#endif
