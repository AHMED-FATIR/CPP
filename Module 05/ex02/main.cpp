/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 08:11:53 by afatir            #+#    #+#             */
/*   Updated: 2023/12/08 22:13:00 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	try
	{
		Bureaucrat bureaucrat("Bureaucrat", 1);
		ShrubberyCreationForm form("Home");
		form.beSigned(bureaucrat);
		form.execute(bureaucrat);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Bureaucrat", 1);
		RobotomyRequestForm form("Home");
		form.beSigned(bureaucrat);
		form.execute(bureaucrat);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "-------------------------------------" << std::endl;
	try
	{
		Bureaucrat bureaucrat("Bureaucrat", 1);
		PresidentialPardonForm form("Home");
		form.beSigned(bureaucrat);
		form.execute(bureaucrat);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;	
}
