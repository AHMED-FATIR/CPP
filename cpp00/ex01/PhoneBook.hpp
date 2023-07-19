/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:16:28 by afatir            #+#    #+#             */
/*   Updated: 2023/07/18 04:34:23 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#define RED "\e[1;31m"
#define WHI "\e[0;37m"

#include "Contact.hpp"

class PhoneBook 
{
public:
    PhoneBook();
    ~PhoneBook();

    void addContact(Contact contact);
    void displayContacts();

private:
    static const int MAX_CONTACTS = 8;
    Contact contacts[MAX_CONTACTS];
    int numContacts;
};

#endif
