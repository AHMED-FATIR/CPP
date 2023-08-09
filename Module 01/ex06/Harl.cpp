/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 10:40:12 by afatir            #+#    #+#             */
/*   Updated: 2023/08/07 20:12:08 by afatir           ###   ########.fr       */
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

int	get_level(std::string level)
{
	std::string str[4]={"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 4;

	while (i-- && level.compare(str[i]));
	return i;
}

void Harl::complain(std::string level)
{
	void (Harl::*complaint)();
	int i = get_level(level);

	switch (i)
	{
		case 0:
			complaint = &Harl::debug; (this->*complaint)();
		case 1:
			complaint = &Harl::info; (this->*complaint)();
		case 2:
			complaint = &Harl::warning; (this->*complaint)();
		case 3:
			complaint = &Harl::error; (this->*complaint)();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}