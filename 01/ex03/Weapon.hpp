/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 09:44:56 by afatir            #+#    #+#             */
/*   Updated: 2023/07/22 10:05:56 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>

class Weapon
{
private:
	std::string type;	
public:
	Weapon();
	Weapon(std::string type);
	~Weapon();

	const std::string &getType() const;
	void setType(const std::string &newtype);
};

#endif