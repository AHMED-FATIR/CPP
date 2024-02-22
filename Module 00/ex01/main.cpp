/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:16:24 by afatir            #+#    #+#             */
/*   Updated: 2024/02/22 12:11:52 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string Resize(std::string cmd)
{
	if (cmd.length() > 9)
	{
		cmd = cmd.substr(0, 10);
		cmd[9] = '.';
	}
	return cmd;
}

std::string	GetInput(std::string string)
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
				break;
		}
		else
		{
			if (std::cin.eof())
			{
				std::cin.clear();
				rewind(stdin);
				// fseek(stdin, 0, SEEK_END);
				std::cout << std::endl;
			}
		}
	}
	return (command);
}

Contact	TheAddFunc()
{
	Contact		contact;
	std::string command;

	command = GetInput("enter the first name of the contact: ");
	contact.setFirstName(command);

	command = GetInput("enter the last name of the contact: ");
	contact.setLastName(command);

	command = GetInput("enter the nickname of the contact: ");
	contact.setNickname(command);

	command = GetInput("enter the number of the contact: ");
	contact.setPhoneNumber(command);

	command = GetInput("enter the darkest secret of the contact: ");
	contact.setDarkestSecret(command);

	return (contact);
	
}

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true)
	{
		command = GetInput( "\e[1;32mEnter a command (ADD, SEARCH, or EXIT):\e[0;37m ");
		if (command == "ADD")
			phoneBook.addContact(TheAddFunc());
		else if (command == "SEARCH")
		{
			std::cout << std::endl;
			phoneBook.displayContacts();
			std::cout << std::endl;
			phoneBook.displayContactsFull();
		}
		else if (command == "EXIT")
			break;
		else
			std::cout << RED <<"INVALID COMMAND." << WHI << std::endl;
	}

	return 0;
}
