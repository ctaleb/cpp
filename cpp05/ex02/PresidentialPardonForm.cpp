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

void	PresidentialPardonForm::actExec(const Bureaucrat& executor)
{
	try
	{
		this->execute(executor);
	}
	catch(AForm::UnsignedFormException& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout << this->_target << " has been pardonned by Zaphod Beeblerox." << std::endl;
}

// std::ostream&	operator<<(std::ostream& o, const PresidentialPardonForm& rhs)
// {
// 	o << rhs.getName() << ", ";
// 	if (rhs.getSigned())
// 		o << "signed";
// 	else
// 		o << "unsigned";
// 	o << " form of access grade " << rhs.getSignGrade() << " and of exec grade " << rhs.getExecGrade() << ".";
// 	return (o);
// }