/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:32:39 by afatir            #+#    #+#             */
/*   Updated: 2023/07/22 08:51:56 by afatir           ###   ########.fr       */
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
    // Create a horde of 5 zombies with the name "Horde Zombie"
    Zombie* zombieHordePtr = zombieHorde(5, "Horde Zombie");

    // Announce each zombie in the horde
    for (int i = 0; i < 5; i++)
        zombieHordePtr[i].announce();

    // Deallocate the memory for the horde
    delete[] zombieHordePtr;

    return 0;
}
