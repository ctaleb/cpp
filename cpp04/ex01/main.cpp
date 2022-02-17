#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* meta[10];
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	std::cout << "-----------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		if ( i < 5)
			meta[i] = new Dog();
		else
			meta[i] = new Cat();
	}
	std::cout << "-----------------------------" << std::endl;
	Cat Tom;
	Cat Jerry(Tom);
	std::cout << "-----------------------------" << std::endl;
	std::cout << Tom.getBrain() << std::endl;
	std::cout << Jerry.getBrain() << std::endl;
	std::cout << Tom.getBrain()->getIdea(0) << std::endl;
	std::cout << Jerry.getBrain()->getIdea(0) << std::endl;
	std::cout << "-----------------------------" << std::endl;
	Jerry.getBrain()->setIdea(0, "I'm hungry");
	std::cout << Tom.getBrain() << std::endl;
	std::cout << Jerry.getBrain() << std::endl;
	std::cout << Tom.getBrain()->getIdea(0) << std::endl;
	std::cout << Jerry.getBrain()->getIdea(0) << std::endl;
	std::cout << "-----------------------------" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		meta[i]->makeSound();
		delete meta[i];
	}

	return (0);
}