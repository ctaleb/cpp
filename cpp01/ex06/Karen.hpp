#ifndef KAREN_HPP
# define KAREN_HPP

# include <string>
# include <iostream>

class Karen
{
private:
	void	debug(void) const;
	void	info(void) const;
	void	warning(void) const;
	void	error(void) const;
	
public:
	Karen(void);
	~Karen(void);
	void	complain(std::string mode) const;
};

#endif
