/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 09:32:57 by afatir            #+#    #+#             */
/*   Updated: 2023/12/13 21:33:09 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}
ScalarConverter::ScalarConverter(ScalarConverter const &cpy){
	*this = cpy;
}
ScalarConverter::~ScalarConverter(){}
ScalarConverter &ScalarConverter::operator=(ScalarConverter const &cpy){
	if (this != &cpy){
		*this = cpy;
	}
	return *this;
}
//##############################################################################################//
int		pars(std::string str)
{
	int i = 0;
	int point = 0;
	int flag = 0;

	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (str[i] == '.')
			point++;
		else if (str[i] == 'f' && str[i + 1] == '\0')
			break;
		else if (!std::isdigit(str[i])){
			std::cout << RED << "impossible" << WHI << std::endl; return 0;
		}
		if (std::isdigit(str[i]))
			flag++;
		i++;
	}
	if (point > 1 || flag == 0){
		std::cout << RED << "impossible" << WHI << std::endl; return 0;
	}
	return 1;
}

void	toChar(std::string str)
{
	if (std::isprint(str[0]) && !std::isdigit(str[0]) && str.length() == 1){
		std::cout << GRE << "'" << str[0] << "'" << WHI << std::endl; return;
	}
	if (!pars(str))
		return ;
	long double d = std::strtold(str.c_str(), NULL);
	if (d != static_cast<int>(d)){
		std::cout << RED << "impossible" << WHI << std::endl; return ;
	}
	if (!std::isprint(d)){
		std::cout << RED << "non displayable" << WHI << std::endl; return ;
	}
	std::cout << GRE << "'" << static_cast<char>(d) << "'" << std::endl;
}

void	toInt(std::string str)
{
	if (std::isprint(str[0]) && str.length() == 1 && !std::isdigit(str[0])){
		std::cout << GRE << static_cast<int>(str[0]) << WHI << std::endl; return;
	}
	if (!pars(str))
		return ;
	long d = std::strtol(str.c_str(), NULL, 10);
	if (d > INT_MAX || d < INT_MIN){
		std::cout << RED << "impossible" << WHI << std::endl; return ;
	}
	std::cout << GRE << static_cast<int>(d) << WHI << std::endl;
}

int	ForFun(std::string str, char c)
{
	if (c == 'f'){
		if (str == "nan" || str == "nanf"){
			std::cout << GRE << "nanf" << WHI << std::endl; return 0;
		}
		if (str == "-inf" || str == "-inff"){
			std::cout << GRE << "-inff" << WHI << std::endl; return 0;
		}
		if (str == "+inf" || str == "+inff"){
			std::cout << GRE << "+inff" << WHI << std::endl; return 0;
		}
	}
	else{
		if (str == "nan" || str == "nanf"){
			std::cout << GRE << "nan" << WHI << std::endl; return 0;
		}
		if (str == "-inf" || str == "-inff"){
			std::cout << GRE << "-inf" << WHI << std::endl; return 0;
		}
		if (str == "+inf" || str == "+inff"){
			std::cout << GRE << "+inf" << WHI << std::endl; return 0;
		}
	}
	return 1;
}

void	toFloat(std::string str)
{
	if (!ForFun(str, 'f'))
		return ;
	if (std::isprint(str[0]) && !std::isdigit(str[0]) && str.length() == 1){
		std::stringstream ss(str);
		ss << static_cast<int>(str[0]);
		str = ss.str();
	}
	else if (!pars(str))
		return ;
	long double d = std::strtold(str.c_str(), NULL);
	if (d == 0){
		std::cout << GRE << std::fixed << std::setprecision(1) << static_cast<float>(d) << 'f' << WHI << std::endl; return ;
	}
	if ( d > 0 && (d > FLT_MAX || d < FLT_MIN)){
		std::cout << RED << "impossible" << WHI << std::endl; return ;
	}
	if (d < 0 && (d < -FLT_MAX || d > -FLT_MIN)){
		std::cout << RED << "impossible" << WHI << std::endl; return ;
	}
	else if (d == static_cast<long>(d))
		std::cout << GRE << std::fixed << std::setprecision(1) << static_cast<float>(d) << 'f' << WHI << std::endl;
	else
		std::cout << GRE << static_cast<float>(d) << 'f' << WHI << std::endl;
}

void	toDouble(std::string str)
{
	if (!ForFun(str, 'd'))
		return ;
	if (std::isprint(str[0]) && !std::isdigit(str[0]) && str.length() == 1){
		std::stringstream ss(str);
		ss << static_cast<int>(str[0]);
		str = ss.str();	
	}
	else if (!pars(str))
		return ;
	long double d = std::strtold(str.c_str(), NULL);
	if (d == 0){
		std::cout << GRE << std::fixed << std::setprecision(1) << static_cast<double>(d) << WHI << std::endl; return ;
	}
	if (d > 0 && (d > DBL_MAX || d < DBL_MIN)){
		std::cout << RED << "impossible" << WHI << std::endl; return ;
	}
	if (d < 0 && (d < -DBL_MAX || d > -DBL_MIN)){
		std::cout << RED << "impossible" << WHI << std::endl; return ;
	}
	else if (d == static_cast<long>(d))
		std::cout << GRE << std::fixed << std::setprecision(1) << static_cast<double>(d) << WHI << std::endl;
	else
		std::cout << GRE << static_cast<double>(d) << WHI << std::endl;
}

void	ScalarConverter::convert(std::string str)
{
	std::cout << GRE << "char: ";
	toChar(str);
	std::cout << GRE << "int: ";
	toInt(str);
	std::cout << GRE << "float: ";
	toFloat(str);
	std::cout << GRE << "double: ";
	toDouble(str);
}
