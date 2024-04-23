/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:15:35 by afatir            #+#    #+#             */
/*   Updated: 2023/12/09 09:13:58 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){
	std::cout << GRE << "Default constructor called for Intern" << WHI << std::endl;
}

Intern::Intern(std::string name) : _name(name){
	std::cout << GRE << "Constructor called for Intern" << WHI << std::endl;
}

Intern::~Intern(){
	std::cout << RED << "Destructor called for Intern" << WHI << std::endl;
}

Intern::Intern(Intern const & src)
{
	std::cout << YEL << "Copy constructor called" << WHI << std::endl;
	*this = src;
}

Intern &Intern::operator=(Intern const & src)
{
	if (this != &src){
		std::cout << YEL << "Copy assignment operator called" << WHI << std::endl;
		this->_name = src._name;
	}
	return *this;
}

const char* Intern::FormDoesNotExistException::what() const throw()
{
	return "Form does not exist";
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	int i = 0;
	AForm *form;

	std::string const nameForm[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (i = 0; i < 3; i++){	
		if (nameForm[i] == name)
			break;
	}
	switch (i)
	{
		case 0:
			form = new ShrubberyCreationForm(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return form;
		case 1:
			form = new RobotomyRequestForm(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return form;
		case 2:
			form = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << form->getName() << std::endl;
			return form;
		default:
			throw FormDoesNotExistException();
	}
	return NULL;
}
