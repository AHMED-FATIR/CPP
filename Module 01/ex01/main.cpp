/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:32:39 by afatir            #+#    #+#             */
/*   Updated: 2023/10/04 12:14:42 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void v()
{
    system("leaks Moarbrainz");
}

int main()
{
    // atexit(v);
    int num = -5;
    Zombie* zombie = zombieHorde(num, "Zombie ");

    for (int i = 0; i < num; i++)
        zombie[i].announce();

    delete[] zombie;
    return 0;
}
