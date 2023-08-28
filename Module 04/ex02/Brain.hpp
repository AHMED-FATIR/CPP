/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:28:15 by afatir            #+#    #+#             */
/*   Updated: 2023/08/28 10:09:34 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#define RED "\e[0;31m"
#define WHI "\e[0;37m"
#define GRE "\e[0;32m"
#define YEL "\e[0;33m"
#define BLU "\e[0;34m"

#include<iostream>
#include<string>

class Brain{
private:
	std::string *ideas;

public:
	Brain();
	~Brain();
	Brain(const Brain& other);
	Brain& operator=(const Brain& other);
};

#endif
