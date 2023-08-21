/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:27:08 by afatir            #+#    #+#             */
/*   Updated: 2023/08/20 10:51:22 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	{
		ClapTrap T;
		for (int i = 0; i < 10; i++)
			T.attack("enemy");
	
		std::cout << std::endl;
		T.attack("enemy");
		std::cout << std::endl;
		
		T.takeDamage(3);
		T.beRepaired(2);
	}
	
	{
		//constructor
		ClapTrap T("andy");
		T.attack("enemy");
		T.takeDamage(3);
		T.beRepaired(2);
	
		std::cout << std::endl;
	
		//copy constructor
		ClapTrap copyT(T);
		copyT.attack("enemy");
		copyT.takeDamage(3);
		copyT.beRepaired(2);
	
		std::cout << std::endl;
	
		// Test copy constructor
		ClapTrap assignedT = copyT;
		assignedT.attack("enemy");
		assignedT.takeDamage(3);
		assignedT.beRepaired(2);
	
		std::cout << std::endl;

		// Test copy assignment operator
		ClapTrap assignedT2;
		assignedT2 = assignedT;
		assignedT2.attack("enemy");
		assignedT2.takeDamage(3);
		assignedT2.beRepaired(2);
	}
	return 0;
}

