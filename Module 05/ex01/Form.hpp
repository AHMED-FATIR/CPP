/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 10:25:36 by afatir            #+#    #+#             */
/*   Updated: 2023/12/08 11:04:04 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

#define RED "\e[1;31m"
#define WHI "\e[0;37m"
#define GRE "\e[1;32m"
#define YEL "\e[1;33m"

class Bureaucrat;

class Form
{
	private:
		std::string const   _name;
		bool                _signed;
		int const           _gradeSign;
		int const           _gradeExec;
	public:
		Form();
		Form(std::string name, int gradeSign, int gradeExec);
		Form(Form const & src);
		~Form();
		Form &operator=(Form const & src);

		std::string getName() const;
		bool        getSigned() const;
		int         getGradeSign() const;
		int         getGradeExec() const;
		void        beSigned(Bureaucrat &bureaucrat);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Form const &i);

#endif