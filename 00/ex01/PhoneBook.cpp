/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:16:10 by afatir            #+#    #+#             */
/*   Updated: 2023/07/21 00:21:29 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	numContacts = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::addContact(Contact contact)
{
	static	int i;

	if (numContacts < 8)
	{
		contacts[numContacts] = contact;
		numContacts++;
	}
	else
	{
		contacts[i++] = contact;
		std::cout << "\e[1;33mPhoneBook is full. Oldest contact replaced.\e[0;37m" << std::endl;
		if (i == 8) i = 0;
	}
}

void PhoneBook::displayContacts()
{
	if (numContacts == 0)
	{
		std::cout << "PhoneBook is empty." << std::endl;
		return;
	}
	std::cout << std::left;
	std::cout << "|" << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
	for (int i = 0; i < numContacts; i++)
	{
		std::cout << "|" << std::setw(10) << i << "|";
		std::cout << std::setw(10) << contacts[i].getFirstName() << "|";
		std::cout << std::setw(10) << contacts[i].getLastName() << "|";
		std::cout << std::setw(10) << contacts[i].getNickname() << "|" << std::endl;
	}
}
