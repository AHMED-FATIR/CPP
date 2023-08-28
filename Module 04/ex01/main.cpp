/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:37:01 by afatir            #+#    #+#             */
/*   Updated: 2023/08/28 10:06:40 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{  
	int n = 10;
	Animal* animals[n];

	for (int i = 0; i < n / 2; ++i) {
		animals[i] = new Dog();
		animals[i]->makeSound();
	}

	for (int i = n / 2; i < n; ++i) {
		animals[i] = new Cat();
		animals[i]->makeSound();
	}

	for (int i = 0; i < n; ++i) {
		delete animals[i];
	}
	Animal* j = new Dog();
	Animal* i = new Cat();
	delete j;
	delete i;
	return 0;

	// Dog d1;
	// std::cout<< std::endl;
	// Dog d;
	// d = d1;
	// std::cout<< std::endl <<std::endl;
}