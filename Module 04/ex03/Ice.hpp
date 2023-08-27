/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 20:45:58 by afatir            #+#    #+#             */
/*   Updated: 2023/08/27 21:09:34 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	~Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);

	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif