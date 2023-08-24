/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:36:45 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 10:37:28 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"

#include<iostream>
#include<string>
#include "Brain.hpp"

class Animal{
private:
    Brain* brain;
protected:
	std::string type;

public:
	Animal();
	Animal(std::string type);
	Animal(const Animal& other);
	virtual ~Animal();

	Animal& operator=(const Animal& other);

	virtual void makeSound() const;
	std::string getType() const;
};


#endif