#include "AForm.hpp"

AForm::AForm(void) : _name("Tax A"), _signed(false), _signGrade(150), _execGrade(150)
{
	std::cout << "You shouldn't be creating a form like this..." << std::endl;
}

AForm::~AForm(void)
{
	std::cout << "Form " << this->_name << " has been destroyed." << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade) : _name(name), _signed(false), _signGrade(signGrade), _execGrade(execGrade)
{
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw AForm::GradeTooHighException();
	else if (this->_signGrade > 150 || this->_signGrade > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(const AForm& src) : _name(src._name), _signed(src._signed), _signGrade(src._signGrade), _execGrade(src._execGrade)
{
	std::cout << "Form " << src.getName() << " has been copied." << std::endl;
}

AForm&	AForm::operator=(const AForm& rhs)
{
	this->_signed = rhs._signed;
	//can't change _name, _signGrade, _execGrade - const

	return (*this);
}

const std::string&	AForm::getName(void) const
{
	return (this->_name);
}

const bool&	AForm::getSigned(void) const
{
	return (this->_signed);
}

const int&	AForm::getSignGrade(void) const
{
	return (this->_signGrade);
}

const int&	AForm::getExecGrade(void) const
{
	return (this->_execGrade);
}

void	AForm::beSigned(const Bureaucrat& worker)
{
	if (!this->_signed)
	{
		if (this->_signGrade >= worker.getGrade())
			this->_signed = true;
		else
			throw AForm::GradeTooLowException();
	}
	else
		throw AForm::AlreadySignedException();
}


void	AForm::executable(const Bureaucrat& executor) const
{
	if (!this->_signed)
		throw AForm::UnsignedFormException();
	else if (this->_execGrade < executor.getGrade())
		throw AForm::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& o, const AForm& rhs)
{
	o << rhs.getName() << ", ";
	if (rhs.getSigned())
		o << "signed";
	else
		o << "unsigned";
	o << " form of access grade " << rhs.getSignGrade() << " and of exec grade " << rhs.getExecGrade() << ".";
	return (o);
}