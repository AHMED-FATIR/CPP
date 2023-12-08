/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:03:58 by afatir            #+#    #+#             */
/*   Updated: 2023/12/08 22:04:46 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = "Default";
	std::cout << GRE << "Default constructor called form RobotomyRequestForm" << WHI << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	this->_target = target;
	std::cout << GRE << "Constructor called form RobotomyRequestForm" << WHI <<std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << RED << "Destructor called form RobotomyRequestForm" << WHI <<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : AForm(src)
{
	std::cout << YEL << "Copy constructor called form RobotomyRequestForm" << WHI <<std::endl;
	*this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
	std::cout << YEL << "Copy Assignation operator called form RobotomyRequestForm" << WHI <<std::endl;
	if (this != &src)
	{
		this->_target = src._target;
		AForm::operator=(src);
	}
	return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getGradeExec())
		throw AForm::GradeTooLowException();
	else if (!getSigned())
		throw NotSignedException();
	else
	{
		std::cout << "RobotomyRequestForm is executed" << std::endl;
		this->action();
	}
}

void	RobotomyRequestForm::action() const
{
	srand(time(NULL));
	if (rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " has not been robotomized successfully" << std::endl;
}

const char* RobotomyRequestForm::NotSignedException::what() const throw()
{
	return "Form is not signed";
}