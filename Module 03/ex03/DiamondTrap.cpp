/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:57:38 by afatir            #+#    #+#             */
/*   Updated: 2023/08/21 22:30:30 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() :  ClapTrap(), ScavTrap(), FragTrap(){
	_name = ClapTrap::name;
	std::cout << GRE << "Default constructor called from DiamondTrap for: " << WHI << name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	_name = name;
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
	std::cout << GRE << "Constructor called from DiamondTrap for: " << WHI << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
{
	_name = other._name;
	std::cout << YEL << "Copy constructor called from DiamondTrap" << WHI << std::endl;
	*this = other;
}

DiamondTrap::~DiamondTrap() {
	std::cout << RED << "Destructor called from DiamondTrap for: " << WHI << _name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	std::cout << YEL << "Copy assignment operator called from DiamondTrap"<< WHI << std::endl;
	if (this != &other) {
		ClapTrap::operator=(other);
		FragTrap::operator=(other);
		ScavTrap::operator=(other);
		_name = other._name;
		
	}
	return *this;
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << _name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}
