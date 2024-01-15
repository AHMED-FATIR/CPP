/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:13:15 by afatir            #+#    #+#             */
/*   Updated: 2024/01/15 21:51:19 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2){
		std::cerr << "Usage: ./RPN \"expressions\"" << std::endl;
		return 0;
	}
	try
	{
		RPN rpn(av[1]);
		rpn.calculate();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Error" << std::endl;
	}
	return 0;
}