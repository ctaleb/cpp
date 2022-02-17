#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form	f1("Taxer", 0, 12);
	}
	catch(Form::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(Form::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Form		f1("Sugar Tax", 50, 25);
	Bureaucrat	b1("Alfred", 1);
	Bureaucrat	b2("John", 51);

	std::cout << f1 << std::endl;

	b2.signForm(f1);
	b1.signForm(f1);
	b1.signForm(f1);

	std::cout << f1 << std::endl;
}
