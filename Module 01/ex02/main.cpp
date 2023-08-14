/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:32:39 by afatir            #+#    #+#             */
/*   Updated: 2023/08/10 09:05:35 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void func(int i)
{
	i = 70;
}

int main()
{

	int i = 90;
	int &k = i;

	func(i);
	k = 900;
	std::cout << i << std::endl;
	std::cout << k << std::endl;
	// std::string str = "HI THIS IS BRAIN";

	// std::string& stringREF = str;
	

	// // Print the memory addresses
	// std::cout << "Memory address of the string variable:\t" << &str << std::endl;
	// std::cout << "Memory address held by stringPTR:\t" << stringPTR << std::endl;
	// std::cout << "Memory address held by stringREF:\t" << &stringREF << std::endl;

	// // Print the values
	// std::cout << "Value of the string variable:\t" << str << std::endl;
	// std::cout << "Value pointed to by stringPTR:\t" << *stringPTR << std::endl;
	// std::cout << "Value pointed to by stringREF:\t" << stringREF << std::endl;

	return 0;
}
