/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 08:10:41 by afatir            #+#    #+#             */
/*   Updated: 2023/12/08 22:40:51 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150){
	std::cout << GRE << "Default constructor called for " << _name << WHI << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << RED << "Destructor called for " << _name << WHI << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << GRE << "Constructor called for " << _name << WHI << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &cp)
{
	std::cout << YEL << "Copy constructor called" << WHI << std::endl;
	*this = cp;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &op)
{
	if (this != &op)
	{
		std::cout << YEL << "copy assignment operator called" << WHI << std::endl;
		const_cast<std::string&>(this->_name) = op._name;
		this->_grade = op._grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const
{
	return this->_name;
}

int	Bureaucrat::getGrade() const
{
	return this->_grade;
}

void	Bureaucrat::increment()
{
	if ((this->_grade - 1) < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
}

void	Bureaucrat::decrement()
{
	if ((this->_grade + 1) > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

std::ostream &operator<<(std::ostream &os, Bureaucrat const &i)
{
	os << i.getName() << ", bureaucrat grade " << i.getGrade() << ".";
	return os;
}
