/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 09:34:08 by afatir            #+#    #+#             */
/*   Updated: 2023/12/13 21:25:33 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cout << RED << "Wrong number of arguments" << std::endl;
        std::cout << RED << "Usage: ./Convert [value]" << std::endl;
        return 0;
    }
    ScalarConverter::convert(static_cast<std::string>(av[1]));
    return 0;
}
