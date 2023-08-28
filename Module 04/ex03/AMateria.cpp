/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:37:32 by afatir            #+#    #+#             */
/*   Updated: 2023/08/28 09:24:48 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : type("Default") {
	// std::cout << GRE << "Default constructor called from AMateria for: " << WHI << type << std::endl;
}
AMateria::AMateria(std::string const &type) : type(type) {
	// std::cout << GRE << "Constructor called from AMateria for: " << WHI << type << std::endl;
}

AMateria::~AMateria() {
	// std::cout << RED << "Destructor called form AMateria for: " << WHI << type << std::endl;
}

AMateria::AMateria(const AMateria &other) : type(other.type) {
	// std::cout << YEL << "Copy constructor called from AMateria" << WHI << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other) {
	// std::cout << BLU << "Copy assignment operator called from AMateria" << WHI << std::endl;
	if (this != &other) {
		type = other.type;
	}
	return *this;
}

std::string const &AMateria::getType() const {
	return type;
}

void AMateria::use(ICharacter &target) {
	std::cout << "Some AMateria use on " << target.getName() << std::endl;
}