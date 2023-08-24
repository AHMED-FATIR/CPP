/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:36:56 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 11:26:18 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(){
	type = "Dog";
	std::cout << GRE << "Default constructor clled from Dog for: " << WHI << type << std::endl;
}
Dog::~Dog(){
	std::cout << RED << "Destructor clled from Dog for: " << WHI << type << std::endl;
}

Dog::Dog(const AAnimal& other) : AAnimal(other){
   std::cout << YEL << "Copy constructor clled from Dog" << WHI << std::endl;
	// *this = other;
}

Dog& Dog::operator=(const AAnimal& other) {
	std::cout << YEL << "Copy assignment operator called from Animal" << WHI << std::endl;
	if (this != &other){
		AAnimal::operator=(other);
		// type = other.type;
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Woof! Woof!" << std::endl;
}
