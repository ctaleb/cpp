#include "Character.hpp"

Character::Character(void)
{
	this->name = "Void";
	std::cout << "An anomaly was born into this world." << std::endl;
	
}

Character::Character(std::string name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		this->inventory[i] = NULL;
	std::cout << this->name << " was born into this world!" << std::endl;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete (this->inventory[i]);
	}
	std::cout << this->name << " has left our plane of existence..." << std::endl;
}

Character::Character(Character const& src)
{
	*this = src;
}

Character& Character::operator=(Character const& rhs)
{
	this->name = rhs.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->inventory[i])
			delete (this->inventory[i]);
		this->inventory[i] = rhs.inventory[i]->clone();
	}
	return (*this);
}

std::string const&	Character::getName(void) const
{
	return(this->name);
}

AMateria*	Character::getInventory(int idx) const
{
	if (idx < 4 && idx >= 0 && this->inventory[idx])
		return(this->inventory[idx]);
	return (NULL);
}

void	Character::equip(AMateria* m)
{
	for(int i = 0; i < 4; i++)
	{
		if (!this->inventory[i])
		{
			this->inventory[i] = m;
			std::cout << m->getType() << " materia has been equipped on slot " << i << " of " << this->name << "'s inventory." << std::endl;
			return ;
		}
	}
	std::cout << this->name << "'s inventory is full." << std::endl;
}

void		Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0 && this->inventory[idx])
	{
		std::cout << this->inventory[idx]->getType() << " materia has been unequipped from " << this->name << "'s inventory." << std::endl;
		this->inventory[idx] = NULL;
	}
}

void		Character::use(int idx, ICharacter& target)
{
	if (idx < 4 && idx >= 0 && this->inventory[idx])
		this->inventory[idx]->use(target);
}
