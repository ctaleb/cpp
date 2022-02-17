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
		bool	operator>(Fixed const& rhs) const;
		bool	operator<(Fixed const& rhs) const;
		bool	operator>=(Fixed const& rhs) const;
		bool	operator<=(Fixed const& rhs) const;
		bool	operator==(Fixed const& rhs) const;
		bool	operator!=(Fixed const& rhs) const;

		Fixed	operator+(Fixed const& rhs) const;
		Fixed	operator-(Fixed const& rhs) const;
		Fixed	operator*(Fixed const& rhs) const;
		Fixed	operator/(Fixed const& rhs) const;

		Fixed&	operator++(void);
		Fixed	operator++(int);
		Fixed&	operator--(void);
		Fixed	operator--(int);

		static Fixed&	min(Fixed& fixedA, Fixed& fixedB);
		static Fixed const&	min(Fixed const& fixedA, Fixed const& fixedB);
		static Fixed&	max(Fixed& FixedA, Fixed& fixedB);
		static Fixed const&	max(Fixed const& fixedA, Fixed const& fixedB);


		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream&	operator<<(std::ostream& o, Fixed const& rhs);

#endif