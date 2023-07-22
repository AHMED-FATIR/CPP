/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:16:24 by afatir            #+#    #+#             */
/*   Updated: 2023/07/18 05:10:39 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>
#include "PhoneBook.hpp"

std::string	ft_get_input(std::string string)
{
	std::string	command;
	std::string	n_command;

	while (1)
	{
		std::cout << string;
		if (std::getline(std::cin, command))
		{
			if(command.empty())
				std::cout << RED << "can't tack empty field" << WHI << std::endl;
			else
			{
				if (command.size() > 10)
				{
					n_command = command.substr(0, 10);
					n_command[9] = '.';
					return (n_command);
				}
				else break;
			}
		}
		else
		{
			if (std::cin.eof())
			{
				std::cin.clear();
				rewind(stdin);
				std::cout << std::endl;
			}
		}
	}
	return (command);
}

Contact	the_add_func()
{
	Contact		contact;
	std::string command;

	command = ft_get_input("enter the first name of the contact: ");
	contact.setFirstName(command);

	command = ft_get_input("enter the last name of the contact: ");
	contact.setLastName(command);

	command = ft_get_input("enter the number of the contact: ");
	contact.setPhoneNumber(command);

	command = ft_get_input("enter the nickname of the contact: ");
	contact.setNickname(command);

	command = ft_get_input("enter the darkest secret of the contact: ");
	contact.setDarkestSecret(command);

	return (contact);
	
}
int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true)
	{
		command = ft_get_input( "\e[1;32mEnter a command (ADD, SEARCH, or EXIT):\e[0;37m ");
		if (command == "ADD")
			phoneBook.addContact(the_add_func());
		else if (command == "SEARCH")
		{
			std::cout << std::endl;
			phoneBook.displayContacts();
			std::cout << std::endl;
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << RED <<"INVALID COMMAND." << WHI << std::endl;
	}

	return 0;
}
