#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_val;
		const static int	_div = 8;
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(Fixed const & toCopy);
		Fixed(const int i);
		Fixed(const float f);

		Fixed&	operator=(Fixed const& rhs);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream & o, Fixed const& rhs);

#endif