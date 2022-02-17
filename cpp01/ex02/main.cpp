#include <iostream>
#include <string>

int	main(void)
{
	std::string	aString = "HI THIS IS BRAIN";
	std::string	*stringPTR = &aString;
	std::string &stringREF = aString;

	std::cout << "Adress of aString: " << &aString << std::endl;
	std::cout << "Adress of stringPTR: " << stringPTR << std::endl;
	std::cout << "Adress of stringREF: " << &stringREF << std::endl;

	std::cout << "String via PTR: " << *stringPTR << std::endl;
	std::cout << "String via REF: " << stringREF << std::endl;
	return (0);
}
