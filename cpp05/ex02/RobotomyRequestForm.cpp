#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 72, 45), _target("The Joker")
{
	std::cout << this->getName() << " was illegally created." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << this->getName() << " has been destroyed." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << this->getName() << " has been created." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& src) : AForm(src.getName(), src.getSignGrade(), src.getExecGrade()), _target(src._target)
{
	std::cout << src.getName() << " has been copied." << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	//can't really copy anything?
	(void)rhs;

	return (*this);
}

void	RobotomyRequestForm::actExec(const Bureaucrat& executor)
{
	try
	{
		this->execute(executor);
	}
	catch(AForm::UnsignedFormException& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	catch(GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout << "VrrRrrRrrrrRRRrrrr~" << std::endl;
	std::cout << "VRRRRRrrrrrrrRRRRRRRrrrrrr~" << std::endl;
	std::cout << "VRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR~" << std::endl;
	srand(time(0));
	if (rand() % 2)
		std::cout << this->_target << " has been Robotomized successfully." << std::endl;
	else
		std::cout << "The Robotomy has failed..." << std::endl;
}
