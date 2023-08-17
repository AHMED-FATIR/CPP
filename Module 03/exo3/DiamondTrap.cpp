/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:57:38 by afatir            #+#    #+#             */
/*   Updated: 2023/08/17 11:05:38 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_diamond_name"), FragTrap("Default_diamond_name"), ScavTrap("Default_diamond_name") {
    std::cout << "DiamondTrap " << name << " is ready!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name) {
    std::cout << "DiamondTrap " << name << " is ready!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
    *this = other;
    std::cout << "DiamondTrap " << name << " is cloned from " << other.name << "!" << std::endl;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap " << name << " has finished!" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other); // Copy attributes from ClapTrap
        FragTrap::operator=(other); // Copy attributes from FragTrap
        ScavTrap::operator=(other); // Copy attributes from ScavTrap
    }
    return *this;
}

void DiamondTrap::whoAmI() {
    std::cout << "I am " << name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

