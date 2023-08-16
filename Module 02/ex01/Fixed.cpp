/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:11:09 by afatir            #+#    #+#             */
/*   Updated: 2023/08/16 09:34:36 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0){
	std::cout << "Default constructor called"<< std::endl;
}

Fixed::Fixed(const int _int){
	std::cout << "Int constructor called"<< std::endl;
	this->value = (_int << fractionalBits);
	// this->value = (_int * Power(2, fractionalBits));
}

Fixed::Fixed(const float _float){
	std::cout << "Float constructor called"<< std::endl;
	this->value = static_cast<int>(roundf(_float * (1 << fractionalBits)));
	// this->value = static_cast<int>(roundf(_float * Power(2, fractionalBits)));
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
	// return static_cast<float>(value) / (Power(2, fractionalBits));
}

int Fixed::toInt( void ) const
{
	return value >> fractionalBits;
	// return value / (Power(2, fractionalBits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}

int	Power(int nb, int power)
{
	int		i = 0;
	int		res = 1;

	if (power < 0)
		return (0);
	while (i < power)
	{
		res = res * nb;
		i++;
	}
	return (res);
}