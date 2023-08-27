/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:36:56 by afatir            #+#    #+#             */
/*   Updated: 2023/08/27 13:10:36 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
	type = "Dog";
	brain = new Brain();
	std::cout << GRE << "Default constructor clled from Dog for: " << WHI << type << std::endl;
}

Dog::~Dog(){
	delete brain;
	std::cout << RED << "Destructor clled from Dog for: " << WHI << type << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other){
   std::cout << YEL << "Copy constructor called from Dog" << WHI << std::endl;
	this->brain = new Brain(*other.brain);
	this->type = other.type;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << BLU << "Copy assignment operator called from Dog" << WHI << std::endl;
	if (this != &other){
		delete brain;
		this->brain = new Brain(*other.brain);
		this->type = other.type;
	}
	return *this;
}

void Dog::makeSound() const{
	std::cout << "Woof! Woof!" << std::endl;
}

