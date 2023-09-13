/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 10:57:41 by afatir            #+#    #+#             */
/*   Updated: 2023/09/13 10:37:59 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"

#include <iostream>
#include <string>
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap :public FragTrap, public ScavTrap{
private:
    std::string _name;
public:
	DiamondTrap();
	~DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap& other);
	DiamondTrap& operator=(const DiamondTrap& other);

	void whoAmI();
	void attack(const std::string& target);
};

#endif
