/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:01:48 by afatir            #+#    #+#             */
/*   Updated: 2023/09/13 10:35:21 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"
	
ScavTrap::ScavTrap(): ClapTrap("Default"){
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << GRE << "Default constructor called from ScavTrap for: " << WHI << name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
	std::cout << GRE << "Constructor called from ScavTrap for: "<< WHI << name << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << RED << "Destructor called from ScavTrap for: " << WHI << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << YEL << "Copy constructor called from ScavTrap" << WHI << std::endl;
	*this = other;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << YEL << "Copy assignment operator called from ScavTrap"<< WHI << std::endl;
	if (this != &other){
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

void ScavTrap::guardGate() {
	std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}

void ScavTrap::attack(const std::string& target)
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