#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Alfred"), _grade(150) 
{
	std::cout << "You're not supposed to be here..." << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Grade " << this->_grade << " bureaucrat " << this->_name << " has retired." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade = grade;
	}
	catch(GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
		this->_grade = 1;
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
		this->_grade = 150;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat& src) : _name(src._name), _grade(src._grade)
{
	std::cout << src._name << " has been cloned." << std::cout;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& rhs)
{
	this->_grade = rhs._grade;
	//can't change _name - const

	return (*this);
}

const std::string&	Bureaucrat::getName(void) const
{
	return (this->_name);
}

const int&	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::UpGrade(void)
{
	try
	{
		if (this->_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else
			this->_grade--;
	}
	catch(GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
		this->_grade = 1;
	}
}

void	Bureaucrat::DownGrade(void)
{
	try
	{
		if (this->_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			this->_grade++;
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
		this->_grade = 150;
	}
}

std::ostream&	operator<<(std::ostream& o, const Bureaucrat& rhs)
{
	o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (o);
}
