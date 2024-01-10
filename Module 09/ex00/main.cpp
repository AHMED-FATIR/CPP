/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 10:03:24 by afatir            #+#    #+#             */
/*   Updated: 2024/01/10 13:39:47 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{

	if (ac != 2){
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	
	try
	{
		BitcoinExchange bit;
		bit.ExchangeData(av[1]);
	}
	catch (std::exception &e)
	{
		std::cout << "Error: " << e.what() << std::endl;
		return 1;
	}
	return 0;
}