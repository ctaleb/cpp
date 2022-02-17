#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5), _target("The Joker")
{
	std::cout << this->getName() << " was illegally created." << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << this->getName() << " has been destroyed." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << this->getName() << " has been created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src.getName(), src.getSignGrade(), src.getExecGrade()), _target(src._target)
{
	std::cout << src.getName() << " has been copied." << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	//can't really copy anything?
	(void)rhs;

	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	this->executable(executor);
	std::cout << this->_target << " has been pardonned by Zaphod Beeblerox." << std::endl;
}
