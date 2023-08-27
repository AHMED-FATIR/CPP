/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:49:24 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 21:15:32 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"

// Include necessary headers and define constants if needed

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
class AMateria; // Forward declaration
#include "IMateriaSource.hpp"
class ICharacter; // Forward declaration


class MateriaSource : public IMateriaSource {
private:
    AMateria *learnedMaterias[4];

public:
    MateriaSource();
    ~MateriaSource();

    void learnMateria(AMateria *m);
    AMateria *createMateria(std::string const &type);
};

#endif