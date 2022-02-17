#ifndef ENTRY_CLASS_HPP
# define ENTRY_CLASS_HPP

# include <iostream>

class Entry
{
	public:
		Entry(void);
		~Entry(void);
		std::string	get_first_name(void) const;
		std::string	get_last_name(void) const;
		std::string	get_nickname(void) const;
		std::string	get_phone_number(void) const;
		std::string	get_darkest_secret(void) const;
		int		set_first_name(std::string first_name);
		int		set_last_name(std::string last_name);
		int		set_nickname(std::string nickname);
		int		set_phone_number(std::string phone_number);
		int		set_darkest_secret(std::string darkest_secret);

	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif