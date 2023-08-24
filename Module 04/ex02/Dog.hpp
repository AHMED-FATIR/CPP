/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:36:59 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 11:21:47 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"

#include<iostream>
#include<string>
#include "AAnimal.hpp"

class Dog : public AAnimal {
public:
    Dog();
    ~Dog();
    Dog(const AAnimal& other);
    Dog& operator=(const AAnimal& other);
    void makeSound() const;
};


#endif