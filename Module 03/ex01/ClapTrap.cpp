/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 09:15:08 by afatir            #+#    #+#             */
/*   Updated: 2023/08/20 11:18:15 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ClapTrap.hpp"
	
ClapTrap::ClapTrap():  name("Default"), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << GRE << "Default constructor called from ClapTrap for: " << WHI << name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0){
	std::cout << GRE << "Constructor called from ClapTrap for: "<< WHI << name << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << RED << "Destructor called from ClapTrap for: " << WHI << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << YEL << "Copy constructor  called from ClapTrap" << WHI << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << YEL << "Copy assignment operator called from ClapTrap"<< WHI << std::endl;
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
		std::cout << "ClapTrap " << name << " Current energy points to attack: " << energyPoints << std::endl;
	}
	else{
		std::cout << "ClapTrap " << name << " doesn't have enough energy to attack!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)amount < 0){
		std::cout << "ClapTrap " << name << " can't takes (amount < 0) points of damage! Current hit points: " << hitPoints << std::endl;
		return ;
	}
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
	if ((int)amount < 0){
		std::cout << "ClapTrap " << name << " can't takes (amount < 0) points of repaired! Current hit points: " << hitPoints << std::endl;
		return ;
	}
	if (hitPoints + amount <= 100){
		hitPoints += amount;
		std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points! Current hit points: " << hitPoints << std::endl;
	}
	else{
		hitPoints = 100;
		std::cout << "ClapTrap " << name << " is fully repaired!" << std::endl;
	}
}