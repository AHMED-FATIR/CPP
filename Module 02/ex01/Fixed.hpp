/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 11:11:12 by afatir            #+#    #+#             */
/*   Updated: 2023/08/12 11:24:10 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed{
private:
	int value;
	static const int fractionalBits = 8;

public:
	Fixed();
	Fixed(const int _int);
	Fixed(const float _float);
	Fixed(const Fixed& other);
	~Fixed();

	Fixed& operator=(const Fixed& other);

    float toFloat( void ) const;
    int toInt( void ) const;

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed);
#endif