#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
public:
	static const int	hp_init = 100;
	static const int	ep_init = 100;
	static const int	ad_init = 30;
	FragTrap(void);
	virtual ~FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap const& src);

	FragTrap&	operator=(FragTrap const& rhs);

	void	attack(std::string target);
	void	highFivesGuys(void);
};

#endif
