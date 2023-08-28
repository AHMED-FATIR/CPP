/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:46:52 by afatir            #+#    #+#             */
/*   Updated: 2023/08/28 09:28:34 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") {
	type = "ice";
	// std::cout << GRE << "Default constructor called from Ice for: " << WHI << type << std::endl;
}

Ice::~Ice() {
	// std::cout << RED << "Destructor called form Ice for: " << type << WHI << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other) {
	// std::cout << YEL << "Copy constructor called from Ice" << WHI << std::endl;
}


Ice &Ice::operator=(const Ice &other) {
	// std::cout << BLU << "Copy assignment operator called from Ice" << WHI << std::endl;
	if (this != &other) {
		AMateria::operator=(other);
	}
	return *this;
}

AMateria *Ice::clone() const {
	// std::cout << "Cloning Ice" << std::endl;
	return new Ice(*this);
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
