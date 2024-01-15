/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 15:57:07 by afatir            #+#    #+#             */
/*   Updated: 2024/01/15 17:00:24 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	if (ac == 1)
	{std::cout << "Please enter more than 1 argument" << std::endl; return 1;}
	
	try
	{
		PmergeMe mrg;
		mrg.pars(av);
		mrg.sortVector();
		mrg.sortDeque();
	}
	catch (const std::exception& e)
	{
		std::cerr << RED << e.what() << RED << std::endl;
	}
}