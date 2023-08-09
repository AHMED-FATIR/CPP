/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:44:36 by afatir            #+#    #+#             */
/*   Updated: 2023/08/06 09:25:53 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(Weapon &weapon) : name("Default"), weapon(weapon){
	std::cout << GRE << "Default constructor of HumanA called" << WHI << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon){
	std::cout << GRE << "Constructor of HumanA called" << WHI << std::endl;
}

HumanA::~HumanA(){
	std::cout << RED << "Destructor of HumanA called" << WHI << std::endl;
}

void HumanA::attack() const
{
	std::cout << name << " attacks with their ";
	std::cout << weapon.getType() << std::endl;
}