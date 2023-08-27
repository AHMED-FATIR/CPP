/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:37:01 by afatir            #+#    #+#             */
/*   Updated: 2023/08/27 11:29:42 by afatir           ###   ########.fr       */
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
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;
	return 0;

	// std::cout<< std::endl <<std::endl;
	// Dog d;
	// Dog d1;
	// d1 = d;
}