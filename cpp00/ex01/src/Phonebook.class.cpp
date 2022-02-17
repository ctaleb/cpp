#include "Phonebook.class.hpp"
#include "Entry.class.hpp"

Phonebook::Phonebook()
{
	this->_i = 0;
	return ;
}

Phonebook::~Phonebook()
{
	return ;
}

std::string	format_string(std::string buffer)
{
	int	size;

	size = buffer.size();
	if (size > 10)
		buffer = buffer.substr(0, 9) + ".";
	else
		buffer = buffer.substr(0, 10);
	return (buffer);
}

int		Phonebook::get_index(void) const
{
	return (this->_i);
}

void	Phonebook::get_contacts(void) const
{
	int		i;
	Entry	contact;

	i = 0;
	if (!this->_i)
	{
		std::cout << "No contacts in phonebook." << std::endl;
		return ;
	}
	while (i < this->_i)
	{
		contact = this->contacts[i];
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << format_string(contact.get_first_name()) << "|";
		std::cout << std::setw(10) << format_string(contact.get_last_name()) << "|";
		std::cout << std::setw(10) << format_string(contact.get_nickname()) << std::endl;
		i++;
	}
}

int	Phonebook::get_contact(int index) const
{
	Entry	contact;

	if (index <= 0 && index > 8)
		return (-1);
	contact = this->contacts[index - 1];
	std::cout << "First Name: " << contact.get_first_name() << std::endl;
	std::cout << "Last Name: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_darkest_secret() << std::endl;
	return (0);
}

int	Phonebook::add_contact(void)
{
	Entry	*contact;

	std::string	buffer;
	if (this->_i >= 8)
		return (-1);
	contact = &this->contacts[this->_i];
	do
	{
		std::cout << "First Name: ";
		std::getline (std::cin, buffer);
		if (std::cin.eof())
			exit (0);
	}
	while (contact->set_first_name(buffer) != 0);
	do
	{
		std::cout << "Last Name: ";
		std::getline (std::cin, buffer);
		if (std::cin.eof())
			exit (0);
	}
	while (contact->set_last_name(buffer) != 0);
	do
	{
		std::cout << "Nickame: ";
		std::getline (std::cin, buffer);
		if (std::cin.eof())
			exit (0);
	}
	while (contact->set_nickname(buffer) != 0);
	do
	{
		std::cout << "Phone Number: ";
		std::getline (std::cin, buffer);
		if (std::cin.eof())
			exit (0);
	}
	while (contact->set_phone_number(buffer) != 0);
	do
	{
		std::cout << "Darkest Secret: ";
		std::getline (std::cin, buffer);
		if (std::cin.eof())
			exit (0);
	}
	while (contact->set_darkest_secret(buffer) != 0);
	this->_i++;
	return (0);
}
