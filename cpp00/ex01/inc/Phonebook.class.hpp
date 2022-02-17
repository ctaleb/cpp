#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP

# include <iomanip>
# include "Entry.class.hpp"

class Phonebook
{
	public:
		Phonebook(void);
		~Phonebook(void);
		Entry		contacts[8];
		int			get_index(void) const;
		void		get_contacts(void) const;
		int			get_contact(int	index) const;
		int			add_contact(void);
	
	private:
		int		_i;
};

#endif