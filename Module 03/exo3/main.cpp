/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:27:08 by afatir            #+#    #+#             */
/*   Updated: 2023/08/17 11:08:45 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
	std::cout << std::endl;
	{	
		// Test FragTrap
		FragTrap frag("FR4G-TP");
		frag.attack("foe");
		frag.takeDamage(20);
		frag.beRepaired(15);
		frag.highFivesGuys();
	}
	std::cout << std::endl;
	{	
    	// Test DiamondTrap
    	DiamondTrap diamond("D1AM-TP");
    	diamond.attack("target");
    	diamond.takeDamage(10);
    	diamond.beRepaired(5);
    	diamond.whoAmI();
	}

	return 0;
}
