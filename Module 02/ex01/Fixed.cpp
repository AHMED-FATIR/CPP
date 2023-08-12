/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:11:09 by afatir            #+#    #+#             */
/*   Updated: 2023/08/12 11:39:33 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0){
    std::cout << "Default constructor called"<< std::endl;
}

Fixed::Fixed(const int _int) : value(_int << fractionalBits){
    std::cout << "Int constructor called"<< std::endl;
}

Fixed::Fixed(const float _float){
    std::cout << "Float constructor called"<< std::endl;
    this->value = static_cast<int>(roundf(_float * (1 << fractionalBits)));
}

Fixed::Fixed(const Fixed& other){
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed(){
    std::cout << "Destructor called"<<std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        this->value = other.value;
    }
    return *this;
}

float Fixed::toFloat( void ) const
{
    return static_cast<float>(value) / (1 << fractionalBits);
}

int Fixed::toInt( void ) const
{
    return value >> fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}