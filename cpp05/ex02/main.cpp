#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main(void)
{
	PresidentialPardonForm		p1("Ken");
	RobotomyRequestForm			p2("Hakim");
	ShrubberyCreationForm		p3("hill");
	std::cout << "----------------------------------------" << std::endl;
	Bureaucrat	b1("Alfred", 1);
	Bureaucrat	b2("John", 71);

	std::cout << "----------------------------------------" << std::endl;
	std::cout << p1 << std::endl;
	std::cout << "----------------------------------------" << std::endl;
	b2.executeForm(p1);
	b2.signForm(p1);
	b1.signForm(p1);
	b1.signForm(p1);
	std::cout << "----------------------------------------" << std::endl;
	b2.executeForm(p1);
	b1.executeForm(p1);
	std::cout << "----------------------------------------" << std::endl;
	b1.signForm(p2);
	b1.executeForm(p2);
	std::cout << "----------------------------------------" << std::endl;
	b1.signForm(p3);
	b1.executeForm(p3);
	std::cout << "----------------------------------------" << std::endl;
}
