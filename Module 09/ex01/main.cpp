/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 14:13:15 by afatir            #+#    #+#             */
/*   Updated: 2024/01/10 14:13:33 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Usage: ./eval_expr \"expression\"" << std::endl;
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