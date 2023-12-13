/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 09:37:15 by afatir            #+#    #+#             */
/*   Updated: 2023/12/10 09:40:55 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::ç(std::string str) : _str(str)
{
}

Serializer::Serializer(Serializer const &cpy)
{
    *this = cpy;
}

Serializer::~Serializer()
{
}

Serializer &Serializer::operator=(Serializer const &cpy)
{
    if (this != &cpy)
    {
        this->_str = cpy._str;
    }
    return *this;
}

void    *Serializer::serialize(void)
{
    srand(time(NULL));
    this->_i = rand();
    this->_c = static_cast<char>(rand() % 256);
    this->_f = static_cast<float>(rand() % 1000) / 100;
    this->_d = static_cast<double>(rand() % 1000) / 100;
    std::cout << GRE << "Serialized data: " << std::endl;
    std::cout << GRE << "int: " << this->_i << std::endl;
    std::cout << GRE << "char: " << this->_c << std::endl;
    std::cout << GRE << "float: " << this->_f << std::endl;
    std::cout << GRE << "double: " << this->_d << std::endl;
    return reinterpret_cast<void *>(this);
}

Data    *Serializer::deserialize(void *raw)
{
    Data *data = new Data;
    data->s1 = std::string(reinterpret_cast<char *>(raw), 8);
    data->n = *reinterpret_cast<int *>(reinterpret_cast<char *>(raw) + 8);
    data->s2 = std::string(reinterpret_cast<char *>(raw) + 12, 8);
    return data;
}

/* ************************************************************************** */