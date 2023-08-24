/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:28:54 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 10:49:12 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain() {
	std::cout << GRE << "Constructor clled from Brain" << WHI << std::endl;
}

Brain::~Brain() {
	std::cout << RED << "Destructor clled from Brain" << WHI << std::endl;
}

Brain::Brain(const Brain& other) {
    for (int i = 0; i < 100; ++i) {
        ideas[i] = other.ideas[i];
    }
    std::cout << YEL << "Copy constructorfrom  Brain" << WHI << std::endl;
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i];
        }
    }
    std::cout << YEL << "Copy assignment operator from Brain" << WHI << std::endl;
    return *this;
}
