#include <iostream>
#include "Entry.class.hpp"

Entry::Entry()
{
	return ;
}

Entry::~Entry()
{
	return ;
}

std::string	Entry::get_first_name(void) const
{
	return (this->_first_name);
}

std::string	Entry::get_last_name(void) const
{
	return (this->_last_name);
}

std::string	Entry::get_nickname(void) const
{
	return (this->_nickname);
}

std::string	Entry::get_phone_number(void) const
{
	return (this->_phone_number);
}

std::string	Entry::get_darkest_secret(void) const
{
	return (this->_darkest_secret);
}

int		Entry::set_first_name(std::string first_name)
{
	int	i;

	i = 0;
	while (first_name[i])
	{
		if (!isalpha(first_name[i]))
			return (-1);
		i++;
	}
	if (!i)
		return (-1);
	this->_first_name = first_name;
	return (0);
}

int		Entry::set_last_name(std::string last_name)
{
	int	i;

	i = 0;
	while (last_name[i])
	{
		if (!isalpha(last_name[i]))
			return (-1);
		i++;
	}
	if (!i)
		return (-1);
	this->_last_name = last_name;
	return (0);
}

int		Entry::set_nickname(std::string nickname)
{
	int	i;

	i = 0;
	while (nickname[i])
	{
		if (!isalpha(nickname[i]))
			return (-1);
		i++;
	}
	if (!i)
		return (-1);
	this->_nickname = nickname;
	return (0);
}

int		Entry::set_phone_number(std::string phone_number)
{
	int	i;

	i = 0;
	while (phone_number[i])
	{
		if (!isdigit(phone_number[i]))
			return (-1);
		i++;
	}
	if (!i)
		return (-1);
	this->_phone_number = phone_number;
	return (0);
}

int		Entry::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
	return (0);
}
