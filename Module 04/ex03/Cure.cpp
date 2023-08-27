/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:48:27 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 20:49:04 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
    std::cout << GRE << "Cure constructor called" << WHI << std::endl;
}

Cure::Cure(const Cure &other) : AMateria(other) {
    std::cout << YEL << "Cure copy constructor" << WHI << std::endl;
}

Cure::~Cure() {
    std::cout << RED << "Cure destructor called" << WHI << std::endl;
}

Cure &Cure::operator=(const Cure &other) {
    std::cout << YEL << "Cure copy assignment operator" << WHI << std::endl;
    if (this != &other) {
        AMateria::operator=(other);
    }
    return *this;
}

AMateria *Cure::clone() const {
    std::cout << "Cloning Cure" << std::endl;
    return new Cure(*this);
}

void Cure::use(ICharacter &target) {
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}