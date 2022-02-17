#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <string>
# include <iostream>
# include <cmath>

# define ARG_ERR "Argument error."
# define CNV_MSG "impossible"
# define CHA_MSG "Non displayable"
# define NAN_MSG "nan"
# define INF_POS "+inf"
# define INF_NEG "-inf"

typedef struct	s_printData
{
	char*		arg;
	std::string	str;
	bool		specialCase[4];
	std::string	specialMsg[4];
	char		c;
	int			i;
	float		f;
	double		d;
}				t_printData;

#endif
