/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:36:51 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 11:26:24 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(){
	type = "Cat";
	std::cout << GRE << "Default constructor clled from Cat for: " << WHI << type << std::endl;
}
Cat::~Cat(){
	std::cout << RED << "Destructor clled from Cat for: " << WHI << type << std::endl;
}

Cat::Cat(const AAnimal& other) : AAnimal(other){
   std::cout << YEL << "Copy constructor clled from Cat" << WHI << std::endl;
	// *this = other;
}

Cat& Cat::operator=(const AAnimal& other) {
	std::cout << YEL << "Copy assignment operator called from Animal" << WHI << std::endl;
	if (this != &other){
		AAnimal::operator=(other);
		// type = other.type;
	}
	return *this;
}

void Cat::makeSound() const{
	std::cout << "Meow! Meow!" << std::endl;
}