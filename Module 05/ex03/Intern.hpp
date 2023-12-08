/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 22:14:49 by afatir            #+#    #+#             */
/*   Updated: 2023/12/08 22:34:55 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	private:
		std::string _name;
	public:
		Intern();
		Intern(std::string name);
		~Intern();
		Intern(Intern const & src);
		Intern &operator=(Intern const & src);

		AForm *makeForm(std::string name, std::string target);
		class FormDoesNotExistException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif