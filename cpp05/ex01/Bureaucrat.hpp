#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <string>
# include <iostream>
# include <stdexcept>
# include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;
	Bureaucrat(void);
public:
	~Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& src);

	Bureaucrat&	operator=(const Bureaucrat& rhs);

	const std::string&	getName(void) const;
	const int&			getGrade(void) const;
	void				upGrade(void);
	void				downGrade(void);
	void				signForm(Form& paper);

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("Bureaucrat's grade is too high (should be between 1 and 150). Grade was set to 1 by default.");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char*	what() const throw()
		{
			return ("Bureaucrat's grade is too low (should be between 1 and 150). Grade was set to 150 by default.");
		}
	};   
};

std::ostream&		operator<<(std::ostream& o, const Bureaucrat& rhs);

#endif
