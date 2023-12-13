/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 09:44:56 by afatir            #+#    #+#             */
/*   Updated: 2023/12/10 09:45:17 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C_HPP
#define C_HPP

#include "Base.hpp"

class C : public Base
{
private:
    /* data */
public:
    C(/* args */);
    C(C const &cpy);
    ~C();
    C &operator=(C const &cpy);
};

#endif