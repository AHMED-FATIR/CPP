/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:37:01 by afatir            #+#    #+#             */
/*   Updated: 2023/08/27 12:13:26 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void v()
{
	system("leaks a.out");
}
int main()
{
	atexit(v);
	// Creating instances of Dog and Cat
	const Animal* d1 = new Dog();
	const Animal* c1 = new Cat();

	// Creating an array of Animal pointers
	const Animal* animals[] = {d1, c1};
	const int numAnimals = sizeof(animals) / sizeof(animals[0]);

	// Testing makeSound for each animal
	for (int i = 0; i < numAnimals; ++i) {
		const Animal* animal = animals[i];
		animal->makeSound();
		std::cout << "Type: " << animal->getType() << std::endl;
	}

	// Deleting the created objects
	delete d1;
	delete c1;

	return 0;
}