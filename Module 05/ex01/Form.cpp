/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:26:17 by afatir            #+#    #+#             */
/*   Updated: 2023/12/08 10:50:02 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "Form.hpp"

Form::Form() : _name("Default"), _signed(false), _gradeSign(150), _gradeExec(150){
	std::cout << GRE << "Default constructor called for " << _name << WHI << std::endl;
}

Form::~Form(){
	std::cout << RED << "Destructor called for " << _name << WHI << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << GRE << "Constructor called for " << _name << WHI << std::endl;
	if (gradeSign < 1 || gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (gradeSign > 150 || gradeExec > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src) : _name(src._name), _signed(src._signed), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec)
{
	std::cout << YEL << "Copy constructor called" << WHI << std::endl;
	if (src._gradeSign < 1 || src._gradeExec < 1)
		throw Form::GradeTooHighException();
	else if (src._gradeSign > 150 || src._gradeExec > 150)
		throw Form::GradeTooLowException();
	else
		*this = src;
}


Form &Form::operator=(Form const & src)
{
	if (this != &src)
	{
		std::cout << YEL << "copy assignment operator called" << WHI << std::endl;
		const_cast<std::string&>(this->_name) = src._name;
		const_cast<int&>(this->_gradeSign) = src._gradeSign;
		const_cast<int&>(this->_gradeExec) = src._gradeExec;
		this->_signed = src._signed;
	}
	return *this;
}

std::string Form::getName() const
{
	return this->_name;
}

bool        Form::getSigned() const
{
	return this->_signed;
}

int         Form::getGradeSign() const
{
	return this->_gradeSign;
}

int         Form::getGradeExec() const
{
	return this->_gradeExec;
}

void	Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > this->_gradeSign)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Grade too high";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Grade too low";
}

std::ostream &operator<<(std::ostream &o, Form const &i)
{
	if (i.getSigned())
		o << i.getName() << " is signed and it's grade is " << i.getGradeSign() << " and require a grade " << i.getGradeExec() << " to be executed.";
	else
		o << i.getName() << " is not signed and require a grade " << i.getGradeSign() << " to be signed and a grade " << i.getGradeExec() << " to be executed.";

	return o;
}
