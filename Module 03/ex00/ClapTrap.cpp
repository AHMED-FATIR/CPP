/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:15:08 by afatir            #+#    #+#             */
/*   Updated: 2023/08/17 09:48:00 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
	
ClapTrap::ClapTrap():  name("Default"), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << GRE << "Default constructor called for: " << WHI << name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << GRE << "Constructor called for: "<< WHI << name << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << RED << "Destructor called for: " << WHI << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << YEL << "Copy constructor called" << WHI << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << YEL << "Copy assignment operator called"<< WHI << std::endl;
	if (this != &other){
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (energyPoints >= 1){
		energyPoints--;
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
	}
	else{
		std::cout << "ClapTrap " << name << " doesn't have enough energy to attack!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hitPoints > amount){
		hitPoints -= amount;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage! Current hit points: " << hitPoints << std::endl;
	}
	else{
		hitPoints = 0;
		std::cout << "ClapTrap " << name << " takes " << amount << " points of damage and is destroyed!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hitPoints + amount <= 10){
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points! Current hit points: " << hitPoints << std::endl;
	}
	else{
		hitPoints = 10;
		std::cout << "ClapTrap " << name << " is fully repaired!" << std::endl;
	}
}