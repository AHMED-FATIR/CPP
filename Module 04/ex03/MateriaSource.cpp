/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:50:05 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 20:50:33 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"


MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        learnedMaterias[i] = nullptr;
    }
    std::cout << GRE << "MateriaSource constructor" << WHI << std::endl;
}

MateriaSource::~MateriaSource() {
    std::cout << RED << "MateriaSource destructor" << WHI << std::endl;
    for (int i = 0; i < 4; ++i) {
        delete learnedMaterias[i];
    }
}

void MateriaSource::learnMateria(AMateria *m) {
    for (int i = 0; i < 4; ++i) {
        if (!learnedMaterias[i]) {
            learnedMaterias[i] = m->clone();
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; ++i) {
        if (learnedMaterias[i] && learnedMaterias[i]->getType() == type) {
            return learnedMaterias[i]->clone();
        }
    }
    return nullptr;
}