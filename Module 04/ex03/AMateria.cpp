/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:37:32 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 20:37:52 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"AMateria.hpp"

AMateria::AMateria(std::string const &type) : type(type) {
    std::cout << GRE << "AMateria constructor called for: " << WHI << type << std::endl;
}

AMateria::AMateria(const AMateria &other) : type(other.type) {
    std::cout << YEL << "AMateria copy constructor" << WHI << std::endl;
}

AMateria::~AMateria() {
    std::cout << RED << "AMateria destructor called for: " << WHI << type << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other) {
    std::cout << YEL << "AMateria copy assignment operator" << WHI << std::endl;
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