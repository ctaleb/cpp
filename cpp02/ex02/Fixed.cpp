#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(void)
{
	// std::cout << "Default constructor called." << std::endl;
	this->_val = 0;
}

Fixed::~Fixed(void)
{
	// std::cout << "Destructor called." << std::endl;
}

Fixed::Fixed(Fixed const& toCopy)
{
	// std::cout << "Copy constructor called." << std::endl;
	*this = toCopy;
}

Fixed::Fixed(const int i): _val(i << _div)
{
	// std::cout << "Int constructor called." << std::endl;
}

Fixed::Fixed(const float f): _val(roundf(f * (1 << _div)))
{
	// std::cout << "Float constructor called." << std::endl;
}

Fixed&	Fixed::operator=(Fixed const& rhs)
{
	// std::cout << "Assignation operator called." << std::endl;
	this->_val = rhs.getRawBits();
	return (*this);
}

bool	Fixed::operator>(Fixed const& rhs) const
{
	if (this->_val > rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const& rhs) const
{
	if (this->_val < rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const& rhs) const
{
	if (this->_val >= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const& rhs) const
{
	if (this->_val <= rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const& rhs) const
{
	if (this->_val == rhs.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const& rhs) const
{
	if (this->_val != rhs.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const& rhs) const
{
	Fixed	result;

	result.setRawBits(this->_val + rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(Fixed const& rhs) const
{
	Fixed	result;

	result.setRawBits(this->_val - rhs.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(Fixed const& rhs) const
{
	Fixed	result;

	result.setRawBits(this->_val * rhs.getRawBits() >> this->_div);
	return (result);
}

Fixed	Fixed::operator/(Fixed const& rhs) const
{
	Fixed	result;

	result.setRawBits(this->_val / rhs.getRawBits() << this->_div);
	return (result);
}

Fixed&	Fixed::operator++(void)
{
	this->_val++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed result = *this;

	this->_val++;
	return (result);
}

Fixed&	Fixed::operator--(void)
{
	this->_val--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed result = *this;

	this->_val--;
	return (result);
}

Fixed& Fixed::min(Fixed& fixedA, Fixed& fixedB)
{
	if (fixedA <= fixedB)
		return (fixedA);
	else
		return (fixedB);
}

Fixed const& Fixed::min(Fixed const& fixedA, Fixed const& fixedB)
{
	if (fixedA <= fixedB)
		return (fixedA);
	else
		return (fixedB);
}

Fixed& Fixed::max(Fixed& fixedA, Fixed& fixedB)
{
	if (fixedA >= fixedB)
		return (fixedA);
	else
		return (fixedB);
}

Fixed const& Fixed::max(Fixed const& fixedA, Fixed const& fixedB)
{
	if (fixedA >= fixedB)
		return (fixedA);
	else
		return (fixedB);
}

int	Fixed::getRawBits(void) const
{
	// std::cout << "Member function getRawBits called." << std::endl;
	return (this->_val);
}

void	Fixed::setRawBits(int const raw)
{
	// std::cout << "Member function setRawBits called." << std::endl;
	this->_val = raw;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_val / (1 << _div));
}

int		Fixed::toInt(void) const
{
	return (this->_val >> _div);
}

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs)
{
	o << rhs.toFloat();
	return (o);
}