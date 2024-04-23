/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:57:38 by afatir            #+#    #+#             */
/*   Updated: 2023/09/13 10:37:46 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), FragTrap(), ScavTrap(){
	_name = ClapTrap::name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
	std::cout << GRE << "Default constructor called from DiamondTrap for: " << WHI << name << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	_name = name;
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 30;
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

void DiamondTrap::attack(const std::string& target)
{
	if (energyPoints >= 1){
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
		std::cout << "ClapTrap " << name << " Current energy points to attack: " << energyPoints << std::endl;
	}
	else{
		std::cout << "ClapTrap " << name << " doesn't have enough energy to attack!" << std::endl;
	}
}