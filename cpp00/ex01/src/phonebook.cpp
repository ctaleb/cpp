#include <iostream>
#include "Phonebook.class.hpp"
#include "Entry.class.hpp"

int	main(void)
{
	Phonebook	directory;
	std::string	input;
	std::string	index;

	while(input != "EXIT")
	{
		std::cout << "Type a command (\"ADD\", \"SEARCH\", \"EXIT\"):" << std::endl;
		std::cout << "> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			exit (0);
		if (input == "SEARCH")
		{
			directory.get_contacts();
			if (directory.get_index() == 0)
				continue ;
			std::cout << "Type the index of the contact you would like to check: [1 - ";
			std::cout << directory.get_index() << "]" << std::endl;
			std::cout << "> ";
			std::getline(std::cin, index);
			if (std::cin.eof())
				exit (0);
			index = "0" + index;
			if (stoi(index) < 1 || stoi(index) > directory.get_index())
				std::cout << "Invalid index." << std::endl;
			else
				directory.get_contact(stoi(index));
		}
		else if (input == "ADD")
		{
			if (directory.add_contact() < 0)
			{
				std::cout << "No space available." << std::endl;
				continue ;
			}
		}
	}
	return (0);
}
