/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:57:38 by afatir            #+#    #+#             */
/*   Updated: 2023/08/16 08:12:14 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <string>

class Fixed{
private:
	int value;
	static const int fractionalBits = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);

	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif