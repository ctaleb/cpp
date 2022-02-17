#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
	const std::string	_target;
public:
	ShrubberyCreationForm(void);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& src);

	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& rhs);

	void	actExec(const Bureaucrat& executor);
};

#endif
