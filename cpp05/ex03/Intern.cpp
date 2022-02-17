#include "Intern.hpp"

Intern::Intern(void)
{

}

Intern::~Intern(void)
{

}

Intern::Intern(const Intern& src)
{
	(void)src;
}

Intern&	Intern::operator=(const Intern& rhs)
{
	(void)rhs;

	return (*this);
}

AForm*	Intern::makeForm(const std::string& form, const std::string& target)
{
	AForm*	(Intern::*generator[3])(const std::string& target) =
	{
		&Intern::generatePardonForm,
		&Intern::generateRobotomyForm,
		&Intern::generateShrubberyForm
	};
	// AForm*	(*generator[3])(const std::string& target)
	// generator[0] = &PresidentialPardonForm::generateForm;

	std::string	formType[3] =
	{
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};

	for (int i = 0; i < 3; i++)
	{
		if (form == formType[i])
			return ((this->*generator[i])(target));
	}
	std::cout << "Unknown Form type..." << std::endl;
	return (NULL);
}

AForm*	Intern::generateRobotomyForm(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::generatePardonForm(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

AForm*	Intern::generateShrubberyForm(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}
