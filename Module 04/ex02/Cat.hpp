/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:36:53 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 11:21:17 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"

#include<iostream>
#include<string>
#include "AAnimal.hpp"

class Cat : public AAnimal {
public:
    Cat();
    ~Cat();
    Cat(const AAnimal& other);
    Cat& operator=(const AAnimal& other);
    void makeSound() const;
};

#endif