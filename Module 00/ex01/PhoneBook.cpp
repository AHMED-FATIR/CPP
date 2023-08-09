/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:16:10 by afatir            #+#    #+#             */
/*   Updated: 2023/08/05 21:46:59 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	numContacts = 0;
}

PhoneBook::~PhoneBook(){}

void PhoneBook::addContact(Contact contact)
{
	static	int i;

	if (numContacts < 8){
		contacts[numContacts] = contact;
		numContacts++;
	}

	else{
		contacts[i++] = contact;
		std::cout << "\e[1;33mPhoneBook is full. Oldest contact replaced.\e[0;37m" << std::endl;
		if (i == 8) i = 0;
	}
}

void PhoneBook::displayContacts()
{
	std::string cmd;

	if (numContacts == 0){
		std::cout << "PhoneBook is empty." << std::endl;
		return;
	}

	std::cout << "|" << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nickname" << "|" << std::endl;

	for (int i = 0; i < numContacts; i++)
	{
		std::string first = Resize(contacts[i].getFirstName());
		std::string last = Resize(contacts[i].getLastName());
		std::string nick = Resize(contacts[i].getNickname());

		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << first << "|";
		std::cout << std::setw(10) << last << "|";
		std::cout << std::setw(10) << nick << "|" << std::endl;
	}
}

void PhoneBook::displayContactsFull()
{
	int i = 0;
	std::string cmd;

	if (numContacts == 0)
		return;

	cmd = GetInput("\e[1;33menter the index of the contact: \e[0;37m");
	for(size_t j = 0; j < cmd.length(); j++){
		if (!std::isdigit(cmd[j])){
			std::cout << RED << "Invalid Index (the index should be an int)" << WHI << std::endl << std::endl;
			return;
		}
		i = i * 10 + cmd[j] - '0';
	}

	if (i > (numContacts - 1)){
		std::cout << RED << "This index (" << i << ") is not exist " << std::endl;
		std::cout << "the current available indexes is between 0 and " << (numContacts - 1) << WHI << std::endl << std::endl;
		return;
	}

	std::cout << std::endl;
	std::cout << "The first name of the contact [" << i << "]: " << contacts[i].getFirstName() << std::endl;
	std::cout << "The last name of the contact [" << i << "]: " << contacts[i].getLastName() << std::endl;
	std::cout << "The nickname of the contact [" << i << "]: " << contacts[i].getNickname() << std::endl;
	std::cout << "The number of the contact [" << i << "]: " << contacts[i].getPhoneNumber() << std::endl;
	std::cout << "The darkest secret of the contact [" << i << "]: " << contacts[i].getDarkestSecret() << std::endl;
	std::cout << std::endl;
}
