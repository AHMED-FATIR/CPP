/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:40:12 by afatir            #+#    #+#             */
/*   Updated: 2023/07/26 10:57:52 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::debug(){
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
}

void Harl::info(){
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "INFO: I cannot believe adding extra bacon costs more money. You didn't put enough ";
	std::cout << "bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl << std::endl;
}

void Harl::warning(){
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been ";
	std::cout << "coming for years whereas you started working here since last month." << std::endl << std::endl;
}

void Harl::error(){
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
}

void Harl::complain(std::string level)
{
	void (Harl::*complaint)();
	switch (level[0])
	{
		case 'D':
			complaint = &Harl::debug; (this->*complaint)();
			complaint = &Harl::info; (this->*complaint)();
			complaint = &Harl::warning; (this->*complaint)();
			complaint = &Harl::error; (this->*complaint)();
			break;
		case 'I':
			complaint = &Harl::info; (this->*complaint)();
			complaint = &Harl::warning; (this->*complaint)();
			complaint = &Harl::error; (this->*complaint)();
			break;
		case 'W':
			complaint = &Harl::warning; (this->*complaint)();
			complaint = &Harl::error; (this->*complaint)();
			break;
		case 'E':
			complaint = &Harl::error; (this->*complaint)();
			break;
		default:
			std::cout << "Invalid complaint level: " << level << std::endl << std::endl;
			return;
	}
}