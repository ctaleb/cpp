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
typename C::iterator	easyfind(C& container, int n)
{
	typename C::iterator	result;

	result = std::find(container.begin(), container.end(), n);
	if (result == container.end())
		throw NotFoundException();
	return (result);
}

#endif
