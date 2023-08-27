/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:36:48 by afatir            #+#    #+#             */
/*   Updated: 2023/08/27 10:15:30 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal"){
	std::cout << GRE << "Default constructor clled from Animal for: " << WHI << type << std::endl;
}

Animal::~Animal(){
	std::cout << RED << "Destructor clled from Animal for: " << WHI << type << std::endl;
}

Animal::Animal(const Animal& other){
	std::cout << YEL << "Copy constructor clled from Animal" << WHI << std::endl;
	this->type = other.type;
}

Animal& Animal::operator=(const Animal& other){
	std::cout << BLU << "Copy assignment operator called from Animal" << WHI << std::endl;
	if (this != &other){
		type = other.type;
	}
	return *this;
}

void Animal::makeSound() const{
	std::cout << "Some Animal sound" << std::endl;
}

std::string Animal::getType() const{
	return type;
}

