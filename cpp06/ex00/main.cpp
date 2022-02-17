#include "convert.hpp"

void	dataInit(t_printData*	data)
{
	for (int i = 0; i < 4; i++)
	{
		data->specialCase[i] = false;
		data->specialMsg[i] = CNV_MSG;
	}
}

bool	_isnan(t_printData* data)
{
	if (!data->str.compare("nan") || !data->str.compare("nanf"))
		return (true);
	return (false);
}

bool	_isinf(t_printData* data)
{
	if (!data->str.compare("inf") || !data->str.compare("inff")			\
		|| !data->str.compare("+inf") || !data->str.compare("+inff")	\
		|| !data->str.compare("-inf") || !data->str.compare("-inff"))
		return (true);
	return (false);
}

void	doubleConv(t_printData* data)
{
	data->d = atof(data->arg);
	if (_isnan(data))
	{
		data->specialCase[3] = true;
		data->specialMsg[3] = NAN_MSG;
	}
	if (_isinf(data))
	{
		data->specialCase[3] = true;
		if (data->d > 0)
			data->specialMsg[3] = INF_POS;
		else
			data->specialMsg[3] = INF_NEG;
	}
}

void	floatConv(t_printData* data)
{
	//999 999 -> 
	data->f = static_cast<float>(data->d);
	if (_isnan(data))
	{
		data->specialCase[2] = true;
		data->specialMsg[2] = NAN_MSG;
	}
	if (_isinf(data))
	{
		data->specialCase[2] = true;
		if (data->f > 0)
			data->specialMsg[2] = INF_POS;
		else
			data->specialMsg[2] = INF_NEG;
	}
}

void	intConv(t_printData* data)
{
	if (data->d > INT_MAX || data->d < INT_MIN)
	{
		data->specialCase[1] = true;
		data->specialMsg[1] = CNV_MSG;
	}
	if (_isnan(data) || data->d / data->d != 1)
	{
		data->specialCase[1] = true;
		data->specialMsg[1] = CNV_MSG;
	}
	data->i = static_cast<int>(data->d);
}

void	charConv(t_printData*	data)
{
	if (data->str.length() != 1)
	{
		data->specialCase[0] = true;
		data->specialMsg[0] = CNV_MSG;
	}
	if (data->arg[0])
		data->c = data->arg[0];
	else
		data->c = 0;
	if (data->c > 127 || data->c < 32)
	{
		data->specialCase[0] = true;
		data->specialMsg[0] = CHA_MSG;
	}
	// if (data->d < 0 || data->d > 255)
	// {
	// 	data->specialCase[0] = true;
	// 	data->specialMsg[0] = CNV_MSG;
	// }
	// if (_isnan(data))
	// {
	// 	data->specialCase[0] = true;
	// 	data->specialMsg[0] = CNV_MSG;
	// }
	// if (_isinf(data))
	// {
	// 	data->specialCase[0] = true;
	// 	data->specialMsg[0] = CNV_MSG;
	// }
	// data->c = static_cast<char>(data->d);
}

void	printAll(t_printData data)
{
	std::cout << "char: ";
	if (data.specialCase[0])
		std::cout << data.specialMsg[0];
	else
		std::cout << data.c;
	std::cout << std::endl;
	std::cout << "int: ";
	if (data.specialCase[1])
		std::cout << data.specialMsg[1];
	else
		std::cout << data.i;
	std::cout << std::endl;
	std::cout << "float: ";
	if (data.specialCase[2])
		std::cout << data.specialMsg[2];
	else
	{
		std::cout << data.f;
		if (!fmod(data.f, 1))
			std::cout << ".0";
	}
	std::cout << "f" << std::endl;
	std::cout << "double: ";
	if (data.specialCase[3])
		std::cout << data.specialMsg[3];
	else
	{
		std::cout << data.d;
		if (!fmod(data.d, 1))
			std::cout << ".0";
	}
	std::cout << std::endl;
}

int	main(int ac, char** av)
{
	t_printData	data;

	if (ac != 2)
	{
		std::cout << ARG_ERR << std::endl;
		return (1);
	}
	dataInit(&data);
	data.arg = av[1];
	data.str = av[1];
	doubleConv(&data);
	floatConv(&data);
	intConv(&data);
	charConv(&data);
	printAll(data);
	return (0);
}
