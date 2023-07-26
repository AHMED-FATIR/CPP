/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:44:42 by afatir            #+#    #+#             */
/*   Updated: 2023/07/24 11:47:00 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() : name("Default"){
    std::cout << "Default constructor of HumanB called" << std::endl;
}

HumanB::HumanB(std::string name) : name(name), weapon(nullptr){
    std::cout << "Constructor of HumanB called" << std::endl;
}

HumanB::~HumanB(){
    std::cout << "Destructor of HumanB called" << std::endl;
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