#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <vector>
# include <iostream>
# include <string>
# include <exception>
# include <algorithm>
# include <random>
# include <time.h>

class NotFoundException : public std::exception
{
public:
	virtual const char*	what() const throw()
	{
		return ("integer not found...");
	}
};

template <typename C>
int	easyfind(C& container, int n)
{
	typename C::iterator	it;
	int						i = 0;

	for (it = container.begin(); it != container.end(); it++)
	{
		if (*it == n)
			return (i);
		i++;
	}
	throw NotFoundException();
}

#endif
