#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <time.h>
# include <random>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
	const std::string	_target;
public:
	RobotomyRequestForm(void);
	~RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& src);

	RobotomyRequestForm&	operator=(const RobotomyRequestForm& rhs);

	void	execute(const Bureaucrat& executor) const;
};

#endif
