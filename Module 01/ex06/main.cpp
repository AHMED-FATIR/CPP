/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:40:17 by afatir            #+#    #+#             */
/*   Updated: 2023/08/07 11:06:03 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;

	switch (ac)
	{
		default:
			std::cout << RED << "Wrong argument (./harlFilter <level>)" << WHI << std::endl;
			break;
		case 2:
			harl.complain(av[1]);
			break;
	}
	return 0;
}