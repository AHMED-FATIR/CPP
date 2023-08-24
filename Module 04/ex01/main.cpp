/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:37:01 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 10:52:12 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void v()
{
	system("leaks a.out");
}
int main()
{  
	atexit(v);
    const int numAnimals = 10; // Or the desired number
    Animal* animals[numAnimals];

    for (int i = 0; i < numAnimals / 2; ++i) {
        animals[i] = new Dog();
    }

    for (int i = numAnimals / 2; i < numAnimals; ++i) {
        animals[i] = new Cat();
    }

    for (int i = 0; i < numAnimals; ++i) {
        delete animals[i];
    }
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	return 0;
}
