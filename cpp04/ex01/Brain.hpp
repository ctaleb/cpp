#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain
{
private:
	std::string	_ideas[100];
public:
	Brain(void);
	~Brain(void);
	Brain(const Brain& src);

	Brain&	operator=(Brain const& rhs);

	void	setIdea(int i, std::string idea);
	std::string const&	getIdea(int i) const;
};

#endif
