/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:27:08 by afatir            #+#    #+#             */
/*   Updated: 2023/08/23 11:39:39 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ScavTrap S("ST");
	S.attack("enemy");
	S.takeDamage(30);
	S.beRepaired(10);
	S.guardGate();
	std::cout << std::endl;

	//copy const
	ScavTrap S2(S);
	S2.attack("enemy");
	S2.takeDamage(30);
	S2.beRepaired(10);
	S2.guardGate();
	std::cout << std::endl;

	//copy assi
	ScavTrap S3;
	S3 = S2;
	S3.attack("enemy");
	S3.takeDamage(30);
	S3.beRepaired(10);
	S3.guardGate();
	std::cout << std::endl;

	// ClapTrap *c = new (ScavTrap);
	// delete c;
	// return 0;
}
