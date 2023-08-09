/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:32:39 by afatir            #+#    #+#             */
/*   Updated: 2023/08/06 08:40:55 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	// Creating Default zombie on the stack
	Zombie zombie0;
	zombie0.announce();
	std::cout << std::endl;

	// Creating zombie on the stack
	Zombie zombie1("zombie 1");
	zombie1.announce();
	std::cout << std::endl;

	Zombie zombie2("zombie 2");
	zombie2.announce();
	std::cout << std::endl;

	// Creating zombie on the stack using randomChump()
	randomChump("zombie 3");
	std::cout << std::endl;

	// Creating zombie on the heap using newZombie()
	Zombie *zombie4 = newZombie("zombie 4");
	zombie4->announce();
	delete zombie4;
	std::cout << std::endl;

	return  0;
}
