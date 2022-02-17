#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
private:
	std::string	_type;
public:
	Weapon(std::string type);
	~Weapon(void);
	const std::string	&get_type(void);
	void	setType(std::string type);
};

#endif
