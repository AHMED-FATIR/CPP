/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:27:08 by afatir            #+#    #+#             */
/*   Updated: 2023/08/17 10:18:46 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	{
		// Test ClapTrap
		ClapTrap clap("CL4P-TP");
		clap.attack("enemy");
		clap.takeDamage(3);
		clap.beRepaired(2);
	}
	std::cout << std::endl;
	{
		// Test ScavTrap
		ScavTrap scav("SG7V-TP");
		scav.attack("intruder");
		scav.takeDamage(30);
		scav.beRepaired(10);
		scav.guardGate();
	}

	return 0;
}
