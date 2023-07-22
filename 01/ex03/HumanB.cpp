/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:44:42 by afatir            #+#    #+#             */
/*   Updated: 2023/07/22 10:33:53 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(nullptr){}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}

void HumanB::attack() const
{
    if (weapon != nullptr)
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    else
        std::cout << name << " is unarmed and cannot attack!" << std::endl;
}