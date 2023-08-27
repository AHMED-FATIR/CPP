/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:37:09 by afatir            #+#    #+#             */
/*   Updated: 2023/08/27 12:55:22 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"

#include<iostream>
#include<string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
public:
    WrongCat();
    ~WrongCat();
    WrongCat(const WrongCat& other);
    WrongCat& operator=(const WrongCat& other);

    void makeSound() const;
};

#endif