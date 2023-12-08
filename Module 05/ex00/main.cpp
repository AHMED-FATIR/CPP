/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 08:11:53 by afatir            #+#    #+#             */
/*   Updated: 2023/12/08 11:13:32 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("A", 1);
		std::cout << a << std::endl;
		a.decrement();
		std::cout << a << std::endl;
		a.increment();
		std::cout << a << std::endl;
		a.increment();
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	try
	{
		Bureaucrat d("D", 151);
		std::cout << d << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	try
	{
		Bureaucrat b("B", 150);
		Bureaucrat l = b;
		std::cout << l << std::endl;
		l.increment();
		std::cout << l << std::endl;
		l.decrement();
		std::cout << l << std::endl;
		l.decrement();
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
