/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:35:44 by afatir            #+#    #+#             */
/*   Updated: 2023/08/27 12:54:53 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal"){
	std::cout << GRE << "Default constructor clled from WrongAnimal for: " << WHI << type << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED << "Destructor clled from WrongAnimal for: " << WHI << type << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other){
	std::cout << YEL << "Copy constructor clled from WrongAnimal" << WHI << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other){
	std::cout << BLU << "Copy assignment operator called from WrongAnimal" << WHI << std::endl;
	if (this != &other){
		type = other.type;
	}
	return *this;
}

void WrongAnimal::makeSound() const{
	std::cout << "Some WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const{
	return type;
}