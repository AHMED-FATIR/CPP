/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:10:59 by afatir            #+#    #+#             */
/*   Updated: 2023/08/12 11:53:22 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed {
private:
	int value;
	static const int fractionalBits = 8;

public:
	// ... Constructors and other member functions ...
	Fixed();
	Fixed(const int _int);
	Fixed(const float _float);
	Fixed(const Fixed& other);
	~Fixed();

	Fixed& operator=(const Fixed& other);

	float toFloat( void ) const;
	int toInt( void ) const;
	// Comparison operators
	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;

	// Arithmetic operators
	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;

	// Increment/Decrement operators
	Fixed& operator++();       // Pre-increment
	Fixed operator++(int);     // Post-increment
	Fixed& operator--();       // Pre-decrement
	Fixed operator--(int);     // Post-decrement

	// ... Other member functions ...

	// Static member functions
	static const Fixed& min(const Fixed& a, const Fixed& b);
	static Fixed& min(Fixed& a, Fixed& b);
	static const Fixed& max(const Fixed& a, const Fixed& b);
	static Fixed& max(Fixed& a, Fixed& b);

};
// Overload insertion operator
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
