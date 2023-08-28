/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:28:54 by afatir            #+#    #+#             */
/*   Updated: 2023/08/28 10:09:25 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(){
	ideas = new std::string[100];
	std::cout << GRE << "Constructor clled from Brain " << WHI << std::endl;
}

Brain::~Brain(){
	delete [] ideas;
	std::cout << RED << "Destructor clled from Brain " << WHI << std::endl;
}

Brain::Brain(const Brain& other){
	ideas = new std::string[100];
	std::cout << YEL << "Copy constructor from Brain " << WHI << std::endl;
	for (int i = 0; i < 100; ++i){
		ideas[i] = other.ideas[i];
	}
}

Brain& Brain::operator=(const Brain& other){
	std::cout << BLU << "Copy assignment operator from Brain" << WHI << std::endl;
	if (this != &other){
		for (int i = 0; i < 100; ++i){
			ideas[i] = other.ideas[i];
		}
	}
	return *this;
}
