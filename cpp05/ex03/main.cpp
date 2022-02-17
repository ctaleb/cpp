#include "Intern.hpp"
#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat	b1("Alfred", 1);
	Bureaucrat	b2("John", 71);
	Intern		randomIntern;

	AForm*	pardon = randomIntern.makeForm("presidential pardon", "Arsène");

	b1.signForm(*pardon);
	b1.executeForm(*pardon);

	delete pardon;

	AForm* no = randomIntern.makeForm("lol", "who");
	delete no;
}
