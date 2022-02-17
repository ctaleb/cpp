#include "Fixed.hpp"

Fixed::Fixed(void)
{
	std::cout << "Default constructor called." << std::endl;
	this->_val = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(Fixed const& toCopy)
{
	std::cout << "Copy constructor called." << std::endl;
	*this = toCopy;
}

Fixed &	Fixed::operator=(Fixed const& rhs)
{
	std::cout << "Assignation operator called." << std::endl;
	this->_val = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "Member function getRawBits called." << std::endl;
	return (this->_val);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "Member function setRawBits called." << std::endl;
	this->_val = raw;
}