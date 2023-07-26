/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:40:17 by afatir            #+#    #+#             */
/*   Updated: 2023/07/26 11:05:46 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	switch (ac)
	{
		case 2:
			harl.complain(av[1]);
			break;
		default:
			std::cout << "Wrong argument" << std::endl;
			break;
	}
	return 0;
}