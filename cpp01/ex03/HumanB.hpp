#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	std::string	_name;
	Weapon		*_weapPTR;
public:
	HumanB(std::string name);
	~HumanB(void);
	const std::string &get_name(void);
	void	setWeapon(Weapon &weapon);
	void	attack(void);
};

#endif
