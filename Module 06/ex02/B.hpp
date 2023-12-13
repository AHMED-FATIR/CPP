/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 09:44:14 by afatir            #+#    #+#             */
/*   Updated: 2023/12/10 09:44:30 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef B_HPP
#define B_HPP

#include "Base.hpp"

class B : public Base
{
private:
    /* data */
public:
    B(/* args */);
    B(B const &cpy);
    ~B();
    B &operator=(B const &cpy);
};

#endif