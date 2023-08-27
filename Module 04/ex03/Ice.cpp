/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:46:52 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 21:21:06 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
    std::cout << GRE << "Ice constructor called" << WHI << std::endl;
}

Ice::Ice(const Ice &other) : AMateria(other) {
    std::cout << YEL << "Ice copy constructor" << WHI << std::endl;
}

Ice::~Ice() {
    std::cout << RED << "Ice destructor called" << WHI << std::endl;
}

Ice &Ice::operator=(const Ice &other) {
    std::cout << YEL << "Ice copy assignment operator" << WHI << std::endl;
    if (this != &other) {
        AMateria::operator=(other);
    }
    return *this;
}

AMateria *Ice::clone() const {
    std::cout << "Cloning Ice" << std::endl;
    return new Ice(*this);
}

void Ice::use(ICharacter &target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
