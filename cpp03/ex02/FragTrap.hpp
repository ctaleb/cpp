#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const& src);

	FragTrap&	operator=(FragTrap const& rhs);

	void	attack(std::string target);
	void	highFivesGuys(void);
};

#endif
