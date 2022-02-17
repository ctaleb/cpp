#include "replace.hpp"

void	to_file(std::string content, std::string file)
{
	std::string		rFile = file += ".replace";
	std::ofstream	ofs(rFile);

	if (ofs.fail())
	{
		std::cout << FIL_ERR << std::endl;
		ofs.close();
		return ;
	}
	ofs << content;
	ofs.close();
}

void	change_content(std::string *content, std::string toFind, std::string toChange)
{
	size_t			pos = 0;

	while((pos = content->find(toFind, pos)) != std::string::npos)
	{
		content->erase(pos, toFind.length());
		content->insert(pos, toChange);
		pos += toChange.length();
	}
}	

bool	get_content(std::string file, std::string *content)
{
	std::ifstream	ifs(file);
	std::string		line;

	if (ifs.fail())
	{
		std::cout << FIL_ERR << std::endl;
		ifs.close();
		return (false);
	}
	while (std::getline(ifs, line))
	{
		*content += line;
		if (ifs.peek() != EOF)
			*content += "\n";
	}
	ifs.close();
	return (true);
}

int	main(int ac, char**	av)
{
	std::string		file;
	std::string		toFind;
	std::string		toChange;
	std::string		content;

	if (ac != 4)
	{
		std::cout << ARG_ERR << std::endl;
		return (1);
	}
	file = av[1];
	toFind = av[2];
	toChange = av[3];
	if (toFind.empty())
	{
		std::cout << ARG_ERR << std::endl;
		return (1);
	}
	if (!get_content(file, &content))
		return (2);
	change_content(&content, toFind, toChange);
	to_file(content, file);
}
