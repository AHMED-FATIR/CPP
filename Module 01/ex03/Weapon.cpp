/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:44:53 by afatir            #+#    #+#             */
/*   Updated: 2023/08/14 11:20:15 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(): type("Default"){
	std::cout << GRE << "Default constructor of Weapon called" << WHI << std::endl;
}

Weapon::Weapon(std::string type): type(type){
	std::cout << GRE << "Constructor of Weapon called" << WHI << std::endl;
}

Weapon::~Weapon(){
	std::cout << RED << "Destructor of Weapon called" << WHI << std::endl;
}

const std::string &Weapon::getType() const{
	return type;
}

void Weapon::setType(const std::string &newtype){
	if (this != nullptr)
		this->type = newtype;
}