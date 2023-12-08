/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 08:11:53 by afatir            #+#    #+#             */
/*   Updated: 2023/12/08 11:09:23 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	try
	{
		Bureaucrat b1("b1", 1);
		Form f1("f1", 1, 1);
		f1.beSigned(b1);
		std::cout << f1 << std::endl;
		b1.decrement();
		std::cout << b1 << std::endl;
		f1.beSigned(b1);
	}
	catch(const std::exception&e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	try
	{
		Bureaucrat b2("b2", 100);
		Form f2("f2", 99, 99);
		b2.signForm("f2", f2.getSigned());
		std::cout << f2 << std::endl;
		std::cout << std::endl;
	
		b2.increment();
		std::cout << b2 << std::endl;
		f2.beSigned(b2);
		b2.signForm("f2", f2.getSigned());
		std::cout << f2 << std::endl;
		
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	try
	{
		Form f3;
		Form f4("f3", 50, 50);
		std::cout << f3 << std::endl;
		std::cout << f4 << std::endl;
		f3 = f4;
		std::cout << f4 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	
}
