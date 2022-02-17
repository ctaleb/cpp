#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	static const int	hp_init = 100;
	static const int	ep_init = 50;
	static const int	ad_init = 20;
	ScavTrap(void);
	virtual ~ScavTrap(void);
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const& src);
	
	ScavTrap&	operator=(ScavTrap const& rhs);

	void	attack(std::string target);
	void	guardGate(void);
};

#endif
