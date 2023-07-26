/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:21:15 by afatir            #+#    #+#             */
/*   Updated: 2023/07/26 10:40:45 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	std::cout << "Default constructor called" << std::endl;
}

Harl::~Harl(){
	std::cout << "Desttructor called" << std::endl;
}

void Harl::debug(){
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(){
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough ";
	std::cout << "bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(){
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been ";
	std::cout << "coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(){
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*complaint)();
	switch (level[0])
	{
		case 'D':
			complaint = &Harl::debug;
			break;
		case 'I':
			complaint = &Harl::info;
			break;
		case 'W':
			complaint = &Harl::warning;
			break;
		case 'E':
			complaint = &Harl::error;
			break;
		default:
			std::cout << "Invalid complaint level: " << level << std::endl;
			return;
	}

	(this->*complaint)();
}
