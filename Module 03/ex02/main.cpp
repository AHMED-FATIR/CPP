/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:27:08 by afatir            #+#    #+#             */
/*   Updated: 2023/08/20 11:55:10 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// {
	// 	//Test ScavTrap
	// 	ScavTrap S("ST");
	// 	S.attack("enemy");
	// 	S.takeDamage(30);
	// 	S.beRepaired(10);
	// 	S.guardGate();
	// 	std::cout << std::endl;
	// 	//copy const
	// 	ScavTrap S2(S);
	// 	std::cout << std::endl;
	// 	//copy assi
	// 	ScavTrap S3;
	// 	S3 = S2;
	// 	std::cout << std::endl;
	// }

	{
		// Test FragTrap
		FragTrap F("FT");
		F.attack("enemy");
		F.takeDamage(20);
		F.beRepaired(1);
		F.highFivesGuys();
		std::cout << std::endl;
		//copy const
		FragTrap F2(F);
		std::cout << std::endl;
		//copy assi
		FragTrap F3;
		F3 = F2;
		std::cout << std::endl;
	}
	return 0;
}

