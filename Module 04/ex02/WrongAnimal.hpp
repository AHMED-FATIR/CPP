/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:34:25 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 10:38:38 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"

#include<iostream>
#include<string>
#include "Brain.hpp"

class WrongAnimal{
private:
    Brain* brain;
protected:
	std::string type;

public:
	WrongAnimal();
	WrongAnimal(std::string type);
	WrongAnimal(const WrongAnimal& other);
	virtual ~WrongAnimal();

	WrongAnimal& operator=(const WrongAnimal& other);

	virtual void makeSound() const;
	std::string getType() const;
};
#endif