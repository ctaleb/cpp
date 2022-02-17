#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string	_name;
	int			_hitPoints;
	int			_energyPoints;
	int			_attackDamage;
public:
	ClapTrap(void);
	ClapTrap(std::string name);
	virtual	~ClapTrap(void);
	ClapTrap(int hp, int ep, int ad);
	ClapTrap(std::string name, int hp, int ep, int ad);
	ClapTrap(ClapTrap const& src);

	ClapTrap&	operator=(ClapTrap const& rhs);

	void					attack(const std::string& target);
	void					takeDamage(unsigned int amount);
	void					beRepaired(unsigned int amount);
	const	std::string&	getName(void) const;
	void					setName(std::string name);
	int						getHitPoints(void) const;
	void					setHitPoints(unsigned int nb);
	int						getenergyPoints(void) const;
	void					setenergyPoints(unsigned int nb);
	int						getDamage(void) const;
	void					setDamage(unsigned int nb);
};

#endif
