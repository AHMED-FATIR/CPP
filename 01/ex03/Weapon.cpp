/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:44:53 by afatir            #+#    #+#             */
/*   Updated: 2023/07/22 10:02:11 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(): type(""){}

Weapon::Weapon(std::string type): type(type){}

Weapon::~Weapon(){}

const std::string &Weapon::getType() const
{
	return type;
}

void Weapon::setType(const std::string &newtype)
{
	type = newtype;
}