/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 09:32:00 by afatir            #+#    #+#             */
/*   Updated: 2023/12/13 15:53:53 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <cfloat>
#include <sstream>

#define RED "\e[1;31m"
#define WHI "\e[0;37m"
#define GRE "\e[1;32m"
#define YEL "\e[1;33m"

class ScalarConverter
{
private:
		ScalarConverter();
public:
		ScalarConverter(ScalarConverter const &cpy);
		~ScalarConverter();
		ScalarConverter &operator=(ScalarConverter const &cpy);
		static void	convert(std::string str);
};

#endif