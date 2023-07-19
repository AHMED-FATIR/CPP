/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:16:15 by afatir            #+#    #+#             */
/*   Updated: 2023/07/18 04:40:54 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::~Contact() {}

void Contact::setFirstName(std::string firstname)
{
    firstName = firstname;
}

void Contact::setLastName(std::string lastname)
{
    lastName = lastname;
}

void Contact::setNickname(std::string nicKname)
{
    nickname = nicKname;
}

void Contact::setPhoneNumber(std::string phonenumber)
{
    phoneNumber = phonenumber;
}

void Contact::setDarkestSecret(std::string darkestsecret)
{
    darkestSecret = darkestsecret;
}

std::string Contact::getFirstName()
{
    return firstName;
}

std::string Contact::getLastName()
{
    return lastName;
}

std::string Contact::getNickname()
{
    return nickname;
}

std::string Contact::getPhoneNumber()
{
    return phoneNumber;
}

std::string Contact::getDarkestSecret()
{
    return darkestSecret;
}
