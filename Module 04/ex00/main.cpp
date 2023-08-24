/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 07:37:01 by afatir            #+#    #+#             */
/*   Updated: 2023/08/24 10:44:22 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{   
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wrongCat = new WrongCat(); // Use WrongCat here

	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << " "<< std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;

	std::cout << std::endl;

	meta->makeSound(); // Output: "Some Animal sound"
	j->makeSound(); // Output: "Woof! Woof!"
	i->makeSound(); // Output: "Meow! Meow!"
	wrongCat->makeSound(); // Output: "Wrong meow! Wrong meow!"

	delete meta;
	delete j;
	delete i;
	delete wrongCat;

	
	return 0;
}
