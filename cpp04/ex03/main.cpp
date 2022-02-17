#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << "------------------------------" << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(new Cure());
	src->learnMateria(NULL);
	std::cout << "------------------------------" << std::endl;
	ICharacter* me = new Character("me");
	AMateria* tmp;
	std::cout << "------------------------------" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "------------------------------" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << "------------------------------" << std::endl;
	tmp = src->createMateria("cure");
	me->equip(tmp);
	delete tmp;
	std::cout << "------------------------------" << std::endl;
	tmp = me->getInventory(2);
	me->unequip(2);
	delete tmp;
	tmp = me->getInventory(3);
	me->unequip(3);
	delete tmp;
	std::cout << "------------------------------" << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << "------------------------------" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << "------------------------------" << std::endl;
	tmp = me->getInventory(1);
	me->unequip(1);
	delete tmp;
	tmp = me->getInventory(0);
	me->unequip(0);
	delete tmp;
	std::cout << "------------------------------" << std::endl;
	delete bob;
	delete me;
	delete src;
	return (0);
}