#include "Karen.hpp"

Karen::Karen(void)
{
	std::cout << "\033[36mKaren just entered the restaurant.\033[0m" << std::endl;
	this->complaint[0] = &Karen::debug;
	this->complaint[1] = &Karen::info;
	this->complaint[2] = &Karen::warning;
	this->complaint[3] = &Karen::error;
	this->type[0] = "DEBUG";
	this->type[1] = "INFO";
	this->type[2] = "WARNING";
	this->type[3] = "ERROR";
}

Karen::~Karen(void)
{
	std::cout << "\033[36mKaren left furiously.\033[0m" << std::endl;
}

void	Karen::complain(std::string level) const
{
	for(int i = 0; i < 4; i++)
	{
		if (this->type[i] == level)
		{
			(this->*complaint[i])();
			return ;
		}
	}
	std::cout << "Leave me be, I have nothing to say to you right now." << std::endl;
}

void	Karen::debug(void) const
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple";
	std::cout << "-pickle-special-ketchup burger. I just love it!";
	std::cout << std::endl;
}

void	Karen::info(void) const
{
	std::cout << "I cannot believe adding extra bacon cost more money.";
	std::cout << " You don’t put enough! If you did I would not have to ask for it!";
	std::cout << std::endl;
}

void	Karen::warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’";
	std::cout << "ve been coming here for years and you just started working";
	std::cout << " here last month.";
	std::cout << std::endl;
}

void	Karen::error(void) const
{
	std::cout << "This is unacceptable, I want to speak to the manager now.";
	std::cout << std::endl;
}
