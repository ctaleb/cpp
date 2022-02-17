#include "Karen.hpp"

Karen::Karen(void)
{
	std::cout << "\033[36mKaren just entered the restaurant.\033[0m" << std::endl;
}

Karen::~Karen(void)
{
	std::cout << "\033[36mKaren left furiously.\033[0m" << std::endl;
}

void	Karen::complain(std::string mode) const
{
	int			i;
	std::string	type[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (i = 0; i < 4; i++)
	{
		if (type[i] == mode)
			break ;
	}

	switch (i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]";
			std::cout << std::endl;
			break ;
	}
}

void	Karen::debug(void) const
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple";
	std::cout << "-pickle-special-ketchup burger. I just love it!";
	std::cout << std::endl;
}

void	Karen::info(void) const
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << " You don’t put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void	Karen::warning(void) const
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’";
	std::cout << "ve been coming here for years and you just started working";
	std::cout << " here last month.";
	std::cout << std::endl;
}

void	Karen::error(void) const
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}
