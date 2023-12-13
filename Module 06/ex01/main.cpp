/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 09:37:56 by afatir            #+#    #+#             */
/*   Updated: 2023/12/10 09:38:09 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Serializer s("test");
    void *raw = s.serialize();
    Data *data = s.deserialize(raw);
    std::cout << GRE << "Deserialized data: " << std::endl;
    std::cout << GRE << "s1: " << data->s1 << std::endl;
    std::cout << GRE << "n: " << data->n << std::endl;
    std::cout << GRE << "s2: " << data->s2 << std::endl;
    delete data;
    return 0;
}