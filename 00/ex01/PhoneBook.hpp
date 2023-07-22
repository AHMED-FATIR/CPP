/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:16:28 by afatir            #+#    #+#             */
/*   Updated: 2023/07/21 00:19:44 by afatir           ###   ########.fr       */
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
    Contact contacts[8];
    int numContacts;
};

#endif
