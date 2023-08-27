/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:36:51 by afatir            #+#    #+#             */
/*   Updated: 2023/08/27 10:15:48 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
	type = "Cat";
	brain = new Brain();
	std::cout << GRE << "Default constructor clled from Cat for: " << WHI << type << std::endl;
}

Cat::~Cat(){
	delete brain;
	std::cout << RED << "Destructor clled from Cat for: " << WHI << type << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other){
   std::cout << YEL << "Copy constructor clled from Cat" << WHI << std::endl;
	delete brain;
	this->brain = new Brain(*other.brain);
	this->type = other.type;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << BLU << "Copy assignment operator called from Cat" << WHI << std::endl;
	if (this != &other){
		delete brain;
		this->brain = new Brain(*other.brain);
		this->type = other.type;
	}
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Meow! Meow!" << std::endl;
}