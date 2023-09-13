/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:01:54 by afatir            #+#    #+#             */
/*   Updated: 2023/09/13 10:34:51 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"

#include<iostream>
#include<string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	ScavTrap(const ScavTrap& other);
	ScavTrap& operator=(const ScavTrap& other);

	void guardGate();
	void attack(const std::string& target);
};

#endif