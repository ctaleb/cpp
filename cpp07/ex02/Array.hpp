#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <string>
# include <iostream>
# include <exception>

template <typename T>
class Array
{
private:
	unsigned int	_size;
	T*				_grid;
public:
	Array(void) : _size(0)
	{
		this->_grid = new T[0];
		memset(this->_grid, 0, sizeof(T) * this->_size);
	}
	Array(unsigned int n) : _size(n)
	{
		this->_grid = new T[n];
		memset(this->_grid, 0, sizeof(T) * this->_size);
	}
	~Array(void)
	{
		delete[] this->_grid;
	}
	Array(const Array& src) : _size(src._size)
	{
		this->_grid = new T[this->_size];
		for (int i = 0; i < this->_size; i++)
		{
			this->_grid[i] = src._grid[i];
		}
	}

	const Array&	operator=(const Array& rhs)
	{
		if (this->_grid)
			delete[]	this->_grid;
		this->_size = rhs._size;
		this->_grid = new T[this->_size];
		for (int i = 0; i < this->_size; i++)
		{
			this->_grid[i] = rhs._grid[i];
		}
	}
	T&	operator[](const unsigned int n)
	{
		if (n >= this->_size)
			throw OutOfBoundException();
		return (this->_grid[n]);
	}

	T*	getArray(void)
	{
		return (this->_grid);
	}
	T	getElement(unsigned int n)
	{
		if (n >= this->_size)
			throw OutOfBoundException();
		return (this->_grid[n]);
	}
	unsigned int	size(void)
	{
		return (this->_size);
	}

	class OutOfBoundException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("Not within current array limits.");
		}
	};
};

#endif
