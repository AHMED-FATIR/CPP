/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:44:42 by afatir            #+#    #+#             */
/*   Updated: 2023/12/13 22:23:20 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : name("Default"){
	std::cout << GRE << "Default constructor of HumanB called" << WHI << std::endl;
}

HumanB::HumanB(std::string name) : name(name), weapon(NULL){
	std::cout << GRE << "Constructor of HumanB called" << WHI << std::endl;
}

HumanB::~HumanB(){
	std::cout << RED << "Destructor of HumanB called" << WHI<< std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon){
	if (&newWeapon != NULL)
		this->weapon = &newWeapon;
}

void HumanB::attack() const
{
	if (weapon != NULL)
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " is unarmed and cannot attack!" << std::endl;
}