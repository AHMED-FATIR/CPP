/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 09:36:26 by afatir            #+#    #+#             */
/*   Updated: 2023/12/13 21:45:17 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>
#include <string>

#define RED "\e[1;31m"
#define WHI "\e[0;37m"
#define GRE "\e[1;32m"
#define YEL "\e[1;33m"

struct Data
{
	std::string s1;
	int n;
	std::string s2;
};

class Serializer
{
private:
	Serializer();
public:
	Serializer(Serializer const &cpy);
	~Serializer();
	Serializer	&operator=(Serializer const &cpy);

	static uintptr_t	serialize(Data* ptr);
	static Data	*deserialize(uintptr_t raw);
};

#endif