/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:36:45 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 11:20:03 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"

#include<iostream>
#include<string>
#include "Brain.hpp"

class AAnimal{
private:
    Brain* brain;
protected:
	std::string type;
	std::string getType() const;
public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal& other);
	 virtual ~AAnimal() = 0;

	AAnimal& operator=(const AAnimal& other);

	virtual void makeSound() const = 0;
};


#endif