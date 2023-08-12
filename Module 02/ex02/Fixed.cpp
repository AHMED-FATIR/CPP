/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:10:56 by afatir            #+#    #+#             */
/*   Updated: 2023/08/12 11:55:16 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ... Constructors and other member functions ...

Fixed::Fixed() : value(0){
	// std::cout << "Default constructor called"<< std::endl;
}

Fixed::Fixed(const int _int) : value(_int << fractionalBits){
	// std::cout << "Int constructor called"<< std::endl;
}

Fixed::Fixed(const float _float){
	// std::cout << "Float constructor called"<< std::endl;
	this->value = static_cast<int>(roundf(_float * (1 << fractionalBits)));
}

Fixed::Fixed(const Fixed& other){
	// std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(){
	// std::cout << "Destructor called"<<std::endl;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	// std::cout << "Copy assignment operator called" << std::endl;
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
// Comparison operators
bool Fixed::operator>(const Fixed& other) const {
	return this->toFloat() > other.toFloat();
}

bool Fixed::operator<(const Fixed& other) const {
	return this->toFloat() < other.toFloat();
}

bool Fixed::operator>=(const Fixed& other) const {
	return this->toFloat() >= other.toFloat();
}

bool Fixed::operator<=(const Fixed& other) const {
	return this->toFloat() <= other.toFloat();
}

bool Fixed::operator==(const Fixed& other) const {
	return this->toFloat() == other.toFloat();
}

bool Fixed::operator!=(const Fixed& other) const {
	return this->toFloat() != other.toFloat();
}
// Arithmetic operators
Fixed Fixed::operator+(const Fixed& other) const {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
	if (other.toFloat() == 0)
		throw std::runtime_error("Division by zero");
	return Fixed(this->toFloat() / other.toFloat());
}
// Increment/Decrement operators
Fixed& Fixed::operator++() {
	this->value++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed temp(*this);
	++(*this);
	return temp;
}

Fixed& Fixed::operator--() {
	this->value--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed temp(*this);
	--(*this);
	return temp;
}
// ... Other member functions ...
// Static member functions
const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
	return (a < b) ? a : b;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a < b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
	return (a > b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a > b) ? a : b;
}
// Overload insertion operator
std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return out;
}
