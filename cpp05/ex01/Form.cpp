#include "Form.hpp"

Form::Form(void) : _name("Tax Form"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "You shouldn't be creating a form like this..." << std::endl;
}

Form::~Form(void)
{
	std::cout << "Form " << this->_name << " has been destroyed." << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->_signGrade > 150 || this->_signGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form& src) : _name(src._name), _signed(src._signed), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	std::cout << "Form " << src._name << " has been copied." << std::endl;
}

Form&	Form::operator=(const Form& rhs)
{
	this->_signed = rhs._signed;
	//can't change _name, _signGrade, _execGrade - const

	return (*this);
}

const std::string&	Form::getName(void) const
{
	return (this->_name);
}

const bool&	Form::getSigned(void) const
{
	return (this->_signed);
}

const int&	Form::getSignGrade(void) const
{
	return (this->_signGrade);
}

const int&	Form::getExecGrade(void) const
{
	return (this->_execGrade);
}

void	Form::beSigned(const Bureaucrat& worker)
{
	if (!this->_signed)
	{
		if (this->_signGrade >= worker.getGrade())
			this->_signed = true;
		else
			throw Form::GradeTooLowException();
	}
	else
		throw Form::AlreadySignedException();
}

std::ostream&	operator<<(std::ostream& o, const Form& rhs)
{
	o << rhs.getName() << ", ";
	if (rhs.getSigned())
		o << "signed";
	else
		o << "unsigned";
	o << " form of access grade " << rhs.getSignGrade() << " and of exec grade " << rhs.getExecGrade() << ".";
	return (o);
}