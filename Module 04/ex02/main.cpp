/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:37:01 by afatir            #+#    #+#             */
/*   Updated: 2023/08/28 10:11:31 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal* d1 = new Dog();
	Animal* c1 = new Cat();
	Animal* d2 = new Dog();
	Animal* c2 = new Cat();

	Animal* A[] = {d1, c1, d2, c2};
	int num = sizeof(A) / sizeof(A[0]);

	for (int i = 0; i < num; ++i)
	{
		std::cout << "Type: " << A[i]->getType() << "; ";
		A[i]->makeSound();
	}
	delete d1;
	delete c1;
	delete d2;
	delete c2;

	return 0;
}