/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:44:42 by afatir            #+#    #+#             */
/*   Updated: 2023/08/06 11:02:29 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : name("Default"){
    std::cout << GRE << "Default constructor of HumanB called" << WHI << std::endl;
}

HumanB::HumanB(std::string name) : name(name), weapon(nullptr){
    std::cout << GRE << "Constructor of HumanB called" << WHI << std::endl;
}

HumanB::~HumanB(){
    std::cout << RED << "Destructor of HumanB called" << WHI<< std::endl;
}

void HumanB::setWeapon(Weapon &newWeapon){
    weapon = &newWeapon;
}

void HumanB::attack() const
{
    if (weapon != nullptr)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " is unarmed and cannot attack!" << std::endl;
}