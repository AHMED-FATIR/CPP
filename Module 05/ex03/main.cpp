/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 08:11:53 by afatir            #+#    #+#             */
/*   Updated: 2023/12/09 11:58:58 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
	AForm* rrf = NULL;
	try
	{
		Intern someRandomIntern;
		Bureaucrat b("Bender", 1);
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		rrf->beSigned(b);
		rrf->execute(b);
		delete rrf;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		delete rrf;
	}
}
