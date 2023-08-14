/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:44:48 by afatir            #+#    #+#             */
/*   Updated: 2023/08/14 11:37:16 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{	//NORMAL
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << std::endl;
	{	// NORMAL
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	// std::cout << std::endl;
	// {	//NULL Weapon
	// 	Weapon *club = NULL;
	// 	HumanB jack("jack");
	// 	jack.setWeapon((*club));
	// 	jack.attack();
	// 	(*club).setType("some other type of club");
	// 	jack.attack();
	// }
	// std::cout << std::endl;
	// {	//default
	// 	Weapon club;
	// 	HumanB andy("andy");
	// 	andy.setWeapon(club);
	// 	andy.attack();
	// 	club.setType("some other type of club");
	// 	andy.attack();
	// }
	// std::cout << std::endl;
	// {	//without Weapon
	// 	HumanB andy("andy");
	// 	andy.attack();
	// }
	return 0;
}
