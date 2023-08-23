/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:27:08 by afatir            #+#    #+#             */
/*   Updated: 2023/08/23 11:23:58 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond;

	// DiamondTrap d;
	// d = diamond;
	DiamondTrap d(diamond);

	d.attack("keke");
	d.takeDamage(15);
	d.beRepaired(10);
	std::cout<<std::endl;

	diamond.attack("target");
	diamond.takeDamage(15);
	diamond.beRepaired(10);

	std::cout<<std::endl;
	diamond.highFivesGuys();
	diamond.guardGate();
	diamond.whoAmI();
	return 0;
}
