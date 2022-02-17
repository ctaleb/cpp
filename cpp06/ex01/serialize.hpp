#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <string>
# include <iostream>

typedef struct	sData
{
	char		c;
	int			i;
	double		d;
	std::string	str;
}				Data;

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif