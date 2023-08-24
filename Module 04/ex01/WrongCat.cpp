/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:37:12 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 09:54:48 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	type = "WrongCat";
	std::cout << GRE << "Default constructor clled from WrongCat for: " << WHI << type << std::endl;
}
WrongCat::~WrongCat(){
	std::cout << RED << "Destructor clled from WrongCat for: " << WHI << type << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other){
   std::cout << YEL << "Copy constructor clled from WrongCat" << WHI << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << YEL << "Copy assignment operator called from WrongAnimal" << WHI << std::endl;
	if (this != &other){
		WrongAnimal::operator=(other);
		type = other.type;
	}
	return *this;
}

void WrongCat::makeSound() const{
	std::cout << "wrong Meow! Meow!" << std::endl;
}