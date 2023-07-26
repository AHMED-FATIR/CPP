/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:44:53 by afatir            #+#    #+#             */
/*   Updated: 2023/07/24 11:38:03 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(): type("Default"){
	std::cout << "Default constructor of Weapon called" << std::endl;
}

Weapon::Weapon(std::string type): type(type){
	std::cout << "Constructor of Weapon called" << std::endl;
}

Weapon::~Weapon(){
	std::cout << "Destructor of Weapon called" << std::endl;
}

const std::string &Weapon::getType() const{
	return type;
}

void Weapon::setType(const std::string &newtype){
	type = newtype;
}