/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:15:35 by afatir            #+#    #+#             */
/*   Updated: 2023/12/08 22:44:14 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(std::string name) : _name(name)
{
}

Intern::~Intern()
{
}

Intern::Intern(Intern const & src)
{
	*this = src;
}

Intern &Intern::operator=(Intern const & src)
{
	if (this != &src)
	{
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
	int j = 0;
	std::string const nameForm[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm *form[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};
	for (int i = 0; i < 3; i++)
	{
		if (nameForm[i] == name)
		{
			j = i;
			std::cout << "Intern creates " << name << std::endl;
			for (int i = 0; i < 3; i++)
			{
				if (i != j)
					delete form[i];
			}
			return form[j];
		}
	}
	delete form[0];
	delete form[1];
	delete form[2];
	throw FormDoesNotExistException();
}
