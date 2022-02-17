#ifndef AFORM_HPP
# define AFORM_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_signGrade;
	const int			_execGrade;
public:
	AForm(void);
	virtual	~AForm(void);
	AForm(std::string name, int signGrade, int execGrade);
	AForm(const AForm& src);

	AForm&	operator=(const AForm& rhs);

	const std::string&	getName(void) const;
	const bool&			getSigned(void) const;
	const int&			getSignGrade(void) const;
	const int&			getExecGrade(void) const;
	
	void			beSigned(const Bureaucrat& worker);
	void			execute(const Bureaucrat& executor) const;
	virtual void	actExec(const Bureaucrat& executor) = 0;

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

	class UnsignedFormException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The form is unsigned.");
		}
	};
};

std::ostream&		operator<<(std::ostream& o, const AForm& rhs);

#endif
