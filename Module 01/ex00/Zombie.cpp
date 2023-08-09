/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:34:40 by afatir            #+#    #+#             */
/*   Updated: 2023/08/05 09:47:25 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("Default"){
	std::cout << GRE << "Default Constructor called for: " << WHI << name << std::endl;
}

Zombie::Zombie(std::string name) : name(name){
	std::cout << GRE << "Constructor called for: " << WHI << name << std::endl;
}

Zombie::~Zombie(){
	std::cout << RED << "Destructor called for : " << WHI << name << std::endl;
}

void Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
