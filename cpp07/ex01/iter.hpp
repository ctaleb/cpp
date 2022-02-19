#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template <typename T>
void	iter(T array[], int size, void (*iterator)(T const& var))
{
	for (int i = 0; i < size; i++)
		iterator(array[i]);
}

template <typename T>
void	iterator(T element)
{
	std::cout << element;
}

#endif