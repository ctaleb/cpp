#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("ShrubberyCreationForm", 145, 137), _target("The Joker")
{
	std::cout << this->getName() << " was illegally created." << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << this->getName() << " has been destroyed." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << this->getName() << " has been created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& src) : AForm(src.getName(), src.getSignGrade(), src.getExecGrade()), _target(src._target)
{
	std::cout << src.getName() << " has been copied." << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	//can't really copy anything?
	(void)rhs;

	return (*this);
}

void	ShrubberyCreationForm::actExec(const Bureaucrat& executor)
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
	
	std::ifstream	ifs(this->_target + "_shrubbery");
	if (ifs.fail())
		ifs.close();
	else
	{
		ifs.close();
		std::cout << this->_target << " doesn't have room for a shrubbery." << std::endl;
		return ;
	}
	
	std::ofstream	ofs(this->_target + "_shrubbery");
	if (ofs.fail())
	{
		ofs.close();
		std::cout << this->_target << " doesn't have room for a shrubbery." << std::endl;
		return ;
	}
	else
	{
		ofs << "                                              ." << std::endl
			<< "                                   .         ;  " << std::endl
			<< "      .              .              ;%     ;;   " << std::endl
			<< "        ,           ,                :;%  %;   " << std::endl
			<< "         :         ;                   :;%;'     .,   " << std::endl
			<< ",.        %;     %;            ;        %;'    ,;" << std::endl
			<< "  ;       ;%;  %%;        ,     %;    ;%;    ,%'" << std::endl
			<< "   %;       %;%;      ,  ;       %;  ;%;   ,%;' " << std::endl
			<< "    ;%;      %;        ;%;        % ;%;  ,%;'" << std::endl
			<< "     `%;.     ;%;     %;'         `;%%;.%;'" << std::endl
			<< "      `:;%.    ;%%. %@;        %; ;@%;%'" << std::endl
			<< "         `:%;.  :;bd%;          %;@%;'" << std::endl
			<< "           `@%:.  :;%.         ;@@%;'   " << std::endl
			<< "             `@%.  `;@%.      ;@@%;         " << std::endl
			<< "               `@%%. `@%%    ;@@%;        " << std::endl
			<< "                 ;@%. :@%%  %@@%;       " << std::endl
			<< "                   %@bd%%%bd%%:;     " << std::endl
			<< "                     #@%%%%%:;;" << std::endl
			<< "                     %@@%%%::;" << std::endl
			<< "                     %@@@%(o);  . '         " << std::endl
			<< "                     %@@@o%;:(.,'         " << std::endl
			<< "                 `.. %@@@o%::;         " << std::endl
			<< "                    `)@@@o%::;         " << std::endl
			<< "                     %@@(o)::;        " << std::endl
			<< "                    .%@@@@%::;         " << std::endl
			<< "                    ;%@@@@%::;.          " << std::endl
			<< "                   ;%@@@@%%:;;;. " << std::endl
			<< "               ...;%@@@@@%%:;;;;,.." << std::endl;
		ofs.close();
	}
	std::cout << "A shrubbery tree has been planted at " << this->_target << std::endl;
}
