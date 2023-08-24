/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:37:01 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 11:32:06 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
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
    const AAnimal* j = new Dog();
    const AAnimal* i = new Cat();

    // Creating a Dog and copying its Brain
    const AAnimal* copyJ = new Dog(*j);

    // Creating a Cat and copying its Brain
    const AAnimal* copyI = new Cat(*i);

    // Creating a new Dog and a new Cat
    const AAnimal* newDog = new Dog();
    const AAnimal* newCat = new Cat();

    // Creating an array of Animal pointers
    const AAnimal* animals[] = {j, i, copyJ, copyI, newDog, newCat};

    // Looping over the array and testing makeSound()
    for (size_t idx = 0; idx < sizeof(animals) / sizeof(animals[0]); ++idx) {
        const AAnimal* animal = animals[idx];
        animal->makeSound();
    }

    // Deleting the objects
    for (size_t idx = 0; idx < sizeof(animals) / sizeof(animals[0]); ++idx) {
        delete animals[idx];
    }

    return 0;
}
