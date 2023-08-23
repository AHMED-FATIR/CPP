/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:35:23 by afatir            #+#    #+#             */
/*   Updated: 2023/08/23 11:42:21 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"
	
FragTrap::FragTrap():  ClapTrap(){
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << GRE << "Default constructor called from FragTrap for: " << WHI << name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << GRE << "Constructor called from FragTrap for: "<< WHI << name << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << RED << "Destructor called from FragTrap for: " << WHI << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << YEL << "Copy constructor called from FragTrap" << WHI << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << YEL << "Copy assignment operator called from FragTrap"<< WHI << std::endl;
	if (this != &other){
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	}
	return *this;
}

void FragTrap::highFivesGuys(){
	std::cout << "FragTrap " << name << " requests a positive high five!" << std::endl;
}