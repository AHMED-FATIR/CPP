/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:50:05 by afatir            #+#    #+#             */
/*   Updated: 2023/08/27 14:32:50 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"MateriaSource.hpp"


MateriaSource::MateriaSource() {
    for (int i = 0; i < 4; ++i) {
        learnedMaterias[i] = nullptr;
    }
    std::cout << GRE << "Default constructor called from MateriaSource" << WHI << std::endl;
}

MateriaSource::~MateriaSource() {
    std::cout << RED << "Destructor called from MateriaSource" << WHI << std::endl;
    for (int i = 0; i < 4; ++i) {
        delete learnedMaterias[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource &other){
    std::cout << YEL << "Copy constructor called from MateriaSource" << WHI << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        if (other.learnedMaterias[i])
            learnedMaterias[i] = other.learnedMaterias[i];
        else
            learnedMaterias[i] = nullptr;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &other){
    std::cout << BLU << "Copy assignment operator called from MateriaSource" << WHI << std::endl;
    for (int i = 0; i < 4; ++i)
    {
        delete learnedMaterias[i];
        if (other.learnedMaterias[i])
            learnedMaterias[i] = other.learnedMaterias[i];
        else
            learnedMaterias[i] = nullptr;
    }
    return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; ++i)
    {
        if (!learnedMaterias[i])
        {
            learnedMaterias[i] = m->clone();
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type) {
    for (int i = 0; i < 4; ++i)
    {
        if (learnedMaterias[i] && learnedMaterias[i]->getType() == type)
            return learnedMaterias[i]->clone();
    }
    return nullptr;
}