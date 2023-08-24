/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:36:48 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 11:06:34 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : brain(new Brain()), type("AAnimal"){
	std::cout << GRE << "Default constructor clled from AAnimal for: " << WHI << type << std::endl;
}

AAnimal::AAnimal(std::string type) : brain(new Brain()), type(type){
	std::cout << GRE << "Constructor clled from AAnimal for: " << WHI << type << std::endl;
}

AAnimal::~AAnimal() {
	delete brain;
	std::cout << RED << "Destructor clled from AAnimal for: " << WHI << type << std::endl;
}

AAnimal::AAnimal(const AAnimal& other){
	std::cout << YEL << "Copy constructor clled from AAnimal" << WHI << std::endl;
	*this = other;
}

AAnimal& AAnimal::operator=(const AAnimal& other){
	std::cout << YEL << "Copy assignment operator called from AAnimal" << WHI << std::endl;
	if (this != &other){
		type = other.type;
	}
	return *this;
}

void AAnimal::makeSound() const{
	std::cout << "Some AAnimal sound" << std::endl;
}

std::string AAnimal::getType() const{
	return type;
}