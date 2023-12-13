/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 08:29:23 by afatir            #+#    #+#             */
/*   Updated: 2023/12/13 22:19:25 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie = new (std::nothrow) Zombie[N];
	if(!zombie){
		std::cout << "bad allocation" << std::endl;
		exit(1);
	}
	for (int i = 0; i < N ; i++){
		zombie[i].setName(name);

		// zombie[i].~Zombie();
		// new (&zombie[i]) Zombie(name);
		// zombie[i] = Zombie(name);
	}
	return zombie;
}
