/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:42:26 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 20:43:20 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name) : name(name) {
    for (int i = 0; i < 4; ++i) {
        inventory[i] = nullptr;
    }
    std::cout << GRE << "Character constructor called for: " << WHI << name << std::endl;
}

Character::Character(const Character &other) : name(other.name) {
    std::cout << YEL << "Character copy constructor" << WHI << std::endl;
    for (int i = 0; i < 4; ++i) {
        if (other.inventory[i]) {
            inventory[i] = other.inventory[i]->clone();
        } else {
            inventory[i] = nullptr;
        }
    }
}

Character::~Character() {
    std::cout << RED << "Character destructor called for: " << WHI << name << std::endl;
    for (int i = 0; i < 4; ++i) {
        delete inventory[i];
    }
}

Character &Character::operator=(const Character &other) {
    std::cout << YEL << "Character copy assignment operator" << WHI << std::endl;
    if (this != &other) {
        name = other.name;
        for (int i = 0; i < 4; ++i) {
            delete inventory[i];
            if (other.inventory[i]) {
                inventory[i] = other.inventory[i]->clone();
            } else {
                inventory[i] = nullptr;
            }
        }
    }
    return *this;
}

std::string const &Character::getName() const {
    return name;
}

void Character::equip(AMateria *m) {
    for (int i = 0; i < 4; ++i) {
        if (!inventory[i]) {
            inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx) {
    if (idx >= 0 && idx < 4) {
        inventory[idx] = nullptr;
    }
}

void Character::use(int idx, ICharacter &target) {
    if (idx >= 0 && idx < 4 && inventory[idx]) {
        inventory[idx]->use(target);
    }
}