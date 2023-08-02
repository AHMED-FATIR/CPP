/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:16:28 by afatir            #+#    #+#             */
/*   Updated: 2023/08/02 11:47:59 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define RED "\e[1;31m"
#define WHI "\e[0;37m"

#include <iostream>
#include <string>
#include <iomanip>
#include "Contact.hpp"

class PhoneBook 
{
public:
    PhoneBook();
    ~PhoneBook();

    void addContact(Contact contact);
    void displayContacts();
    void displayContactsFull();

private:
    Contact contacts[8];
    int numContacts;
};

std::string	GetInput(std::string string);
Contact	TheAddFunc();
std::string Resize(std::string cmd);
#endif
