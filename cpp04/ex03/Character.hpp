#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
private:
	Character(void);
	std::string	name;
	AMateria*	inventory[4];
public:
	Character(std::string name);
	~Character(void);
	Character(Character const& src);

	Character&	operator=(Character const& rhs);

	std::string const&	getName(void) const;
	AMateria*	getInventory(int idx) const;

	void		equip(AMateria* m);
	void		unequip(int idx);
	void		use(int idx, ICharacter& target);
};
