/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:27:08 by afatir            #+#    #+#             */
/*   Updated: 2023/08/17 09:52:03 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	// Test default constructor
	ClapTrap defaultTrap("andy");
	defaultTrap.attack("enemy");
	defaultTrap.takeDamage(3);
	defaultTrap.beRepaired(2);

	// // Test parameterized constructor
	// ClapTrap clap("CL4P-TP");
	// clap.attack("enemy");
	// clap.takeDamage(3);
	// clap.beRepaired(2);

	// // Test copy constructor
	// ClapTrap copyTrap(defaultTrap);
	// copyTrap.attack("enemy");
	// copyTrap.takeDamage(3);
	// copyTrap.beRepaired(2);

	// // Test copy assignment operator
	// ClapTrap assignedTrap = copyTrap;
	// assignedTrap.attack("enemy");
	// assignedTrap.takeDamage(3);
	// assignedTrap.beRepaired(2);

	return 0;
}

