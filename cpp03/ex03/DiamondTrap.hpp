#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
private:
	std::string	_name;
public:
	DiamondTrap(void);
	~DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const& src);

	DiamondTrap&	operator=(DiamondTrap const& rhs);

	using	ScavTrap::attack;
	void	whoAmI(void);
};

#endif
