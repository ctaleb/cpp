#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"

class Intern
{
private:
	AForm*	generateRobotomyForm(const std::string& target);
	AForm*	generatePardonForm(const std::string& target);
	AForm*	generateShrubberyForm(const std::string& target);
public:
	Intern(void);
	~Intern(void);
	Intern(const Intern& src);

	Intern&	operator=(const Intern& rhs);

	AForm* makeForm(const std::string& form, const std::string& target);
};

#endif