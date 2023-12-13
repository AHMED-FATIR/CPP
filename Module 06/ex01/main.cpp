/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 09:37:56 by afatir            #+#    #+#             */
/*   Updated: 2023/12/13 21:46:15 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Data *data = new Data;
    data->s1 = "Hello";
    data->n = 42;
    data->s2 = "World";

    uintptr_t raw = Serializer::serialize(data);
    Data *data2 = Serializer::deserialize(raw);

    std::cout << data2->s1 << std::endl;
    std::cout << data2->n << std::endl;
    std::cout << data2->s2 << std::endl;

    delete data;
    return 0;
}