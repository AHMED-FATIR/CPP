/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:57:35 by afatir            #+#    #+#             */
/*   Updated: 2023/08/03 10:34:59 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Default constructor
Fixed::Fixed() : fixed(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    // Implement the copy constructor logic here
}

// Copy assignment operator
Fixed& Fixed::operator=(const Fixed& other) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
        // Implement the copy assignment logic here
    }
    return *this;
}

// Destructor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
    // Implement the destructor logic here
}

// Member function to get raw bits
int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    // Implement the getRawBits logic here
}

// Member function to set raw bits
void Fixed::setRawBits(int const raw) {
    // Implement the setRawBits logic here
}
