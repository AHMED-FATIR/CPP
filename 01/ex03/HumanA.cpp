/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:44:36 by afatir            #+#    #+#             */
/*   Updated: 2023/07/24 11:38:45 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon &weapon) : name("Default"), weapon(weapon){
	std::cout << "Default constructor of HumanA called" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){
	std::cout << "Constructor of HumanA called" << std::endl;
}

HumanA::~HumanA(){
	std::cout << "Destructor of HumanA called" << std::endl;
}

void HumanA::attack() const
{
	std::cout << name << " attacks with their ";
	std::cout << weapon.getType() << std::endl;
}