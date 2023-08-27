/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:35:56 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 21:07:43 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"

// Include necessary headers and define constants if needed

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "Character.hpp"
class ICharacter;

class AMateria
{
protected:
    std::string type;

public:
    AMateria(std::string const &type);
    AMateria(const AMateria &other);
    virtual ~AMateria();

    AMateria &operator=(const AMateria &other);

    std::string const &getType() const;
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif