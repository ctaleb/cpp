#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
	const std::string	_target;
public:
	PresidentialPardonForm(void);
	~PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& src);

	PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);

	void	actExec(const Bureaucrat& executor);
};

#endif
