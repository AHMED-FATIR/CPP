/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:21:15 by afatir            #+#    #+#             */
/*   Updated: 2023/08/07 10:59:43 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){
	std::cout << GRE << "Default constructor called" << WHI << std::endl;
}

Harl::~Harl(){
	std::cout << RED << "Desttructor called" << WHI << std::endl;
}

void Harl::debug( void ){
	std::cout << "DEBUG  : I love having extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ){
	std::cout << "INFO   : I cannot believe adding extra bacon costs more money. You didn't put enough ";
	std::cout << "bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning( void ){
	std::cout << "WARNING: I think I deserve to have some extra bacon for free. I've been ";
	std::cout << "coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ){
	std::cout << "ERROR  : This is unacceptable! I want to speak to the manager now." << std::endl;
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
			complaint = &Harl::debug;
			break;
		case 1:
			complaint = &Harl::info;
			break;
		case 2:
			complaint = &Harl::warning;
			break;
		case 3:
			complaint = &Harl::error;
			break;
		default:
			std::cout << YEL << "Invalid complaint level: " << WHI << level << std::endl;
			return;
	}

	(this->*complaint)();
}
