/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:10:03 by afatir            #+#    #+#             */
/*   Updated: 2023/12/08 22:10:33 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = "Default";
	std::cout << GRE << "Default constructor called form PresidentialPardonForm" << WHI << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	this->_target = target;
	std::cout << GRE << "Constructor called form PresidentialPardonForm" << WHI <<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << RED << "Destructor called form PresidentialPardonForm" << WHI <<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : AForm(src)
{
	std::cout << YEL << "Copy constructor called form PresidentialPardonForm" << WHI <<std::endl;
	*this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
	std::cout << YEL << "Copy Assignation operator called form PresidentialPardonForm" << WHI <<std::endl;
	if (this != &src)
	{
		this->_target = src._target;
		AForm::operator=(src);
	}
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getGradeExec())
		throw AForm::GradeTooLowException();
	else if (!getSigned())
		throw NotSignedException();
	else
	{
		std::cout << "PresidentialPardonForm is executed" << std::endl;
		this->action();
	}
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}

const char* PresidentialPardonForm::NotSignedException::what() const throw()
{
	return "Form is not signed";
}

