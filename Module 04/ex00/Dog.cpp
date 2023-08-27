/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:36:56 by afatir            #+#    #+#             */
/*   Updated: 2023/08/27 12:54:47 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
	type = "Dog";
	std::cout << GRE << "Default constructor clled from Dog for: " << WHI << type << std::endl;
}
Dog::~Dog(){
	std::cout << RED << "Destructor clled from Dog for: " << WHI << type << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other){
   std::cout << YEL << "Copy constructor clled from Dog" << WHI << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << BLU << "Copy assignment operator called from Animal" << WHI << std::endl;
	if (this != &other){
		Animal::operator=(other);
		type = other.type;
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Woof! Woof!" << std::endl;
}
