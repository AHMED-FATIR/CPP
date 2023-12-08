/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:24:47 by afatir            #+#    #+#             */
/*   Updated: 2023/12/08 11:50:30 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	std::cout << GRE << "Default constructor called form ShrubberyCreationForm" << WHI << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	(void)target;
	std::cout << GRE << "Constructor called form ShrubberyCreationForm" << WHI <<std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << RED << "Destructor called form ShrubberyCreationForm" << WHI <<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : AForm(src)
{
	std::cout << YEL << "Copy constructor called form ShrubberyCreationForm" << WHI <<std::endl;
	*this = src;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &src)
{
	std::cout << YEL << "Copy Assignation operator called form ShrubberyCreationForm" << WHI <<std::endl;
	if (this != &src)
	{
		AForm::operator=(src);
	}
	return *this;
}


void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getGradeExec())
		throw AForm::GradeTooLowException();
	else if (!getSigned())
		throw NotSignedException();
	else
	{
		std::cout << "ShrubberyCreationForm is executed" << std::endl;
		this->action();
	}
}

void ShrubberyCreationForm::action() const
{
	std::ofstream file;
	file.open(getName() + "_shrubbery");
	if (!file.is_open())
		throw FileNotOpenException();
	file << "       _-_" << std::endl;
	file << "    /~~   ~~\\" << std::endl;
	file << " /~~         ~~\\" << std::endl;
	file << "{               }" << std::endl;
	file << " \\  _-     -_  /" << std::endl;
	file << "   ~  \\\\ //  ~" << std::endl;
	file << "_- -   | | _- _" << std::endl;
	file << "  _ -  | |   -_" << std::endl;
	file << "      // \\\\" << std::endl;
	file << "     //   \\\\" << std::endl;
	file << "    //     \\\\" << std::endl;
	file << "   //       \\\\" << std::endl;
	file << "  //         \\\\" << std::endl;
	file << " //           \\\\" << std::endl;
	file << "//             \\\\" << std::endl;
	file << "___________________" << std::endl;
	file.close();
}

const char* ShrubberyCreationForm::FileNotOpenException::what() const throw()
{
	return "File not open";
}

const char* ShrubberyCreationForm::NotSignedException::what() const throw()
{
	return "Form not signed";
}
