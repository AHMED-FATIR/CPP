/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:49:24 by afatir            #+#    #+#             */
/*   Updated: 2023/08/27 14:34:47 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"

#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "Character.hpp"
class AMateria;

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria *m) = 0;
	virtual AMateria *createMateria(std::string const &type) = 0;
};

class MateriaSource : public IMateriaSource{
private:
    AMateria *learnedMaterias[4];

public:
    MateriaSource();
    ~MateriaSource();
    MateriaSource(const MateriaSource &other);
    MateriaSource &operator=(const MateriaSource &other);

    void learnMateria(AMateria *m);
    AMateria *createMateria(std::string const &type);
};

#endif