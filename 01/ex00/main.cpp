/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:32:39 by afatir            #+#    #+#             */
/*   Updated: 2023/07/22 08:26:08 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    // Creating zombies on the stack
    Zombie zombie1("zombie 1");
    zombie1.announce();

    Zombie zombie2("zombie 2");
    zombie2.announce();

    // Creating zombies on the heap using newZombie()
    Zombie* zombie3 = newZombie("zombie 3");
    zombie3->announce();
    delete zombie3;

    // Creating zombies on the stack using randomChump()
    randomChump("zombie 4");

    return  0;
}