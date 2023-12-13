/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 09:36:26 by afatir            #+#    #+#             */
/*   Updated: 2023/12/10 09:37:12 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP
#include <iostream>
#include <string>
#include <ctime>

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
    std::string _str;
    int _i;
    char _c;
    float _f;
    double _d;
    Serializer();

public:
    Serializer(std::string str);
    Serializer(Serializer const &cpy);
    ~Serializer();
    Serializer &operator=(Serializer const &cpy);
    void    *serialize(void);
    Data    *deserialize(void *raw);
};

#endif