#ifndef FORM_HPP
# define FORM_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_signGrade;
	const int			_execGrade;
public:
	Form(void);
	~Form(void);
	Form(std::string name, int signGrade, int execGrade);
	Form(const Form& src);

	Form&	operator=(const Form& rhs);

	const std::string&	getName(void) const;
	const bool&			getSigned(void) const;
	const int&			getSignGrade(void) const;
	const int&			getExecGrade(void) const;
	
	void	beSigned(const Bureaucrat& worker);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("Grade too high.");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("Grade too low.");
		}
	};

	class AlreadySignedException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("Form already signed.");
		}
	};
};

std::ostream&		operator<<(std::ostream& o, const Form& rhs);

#endif
