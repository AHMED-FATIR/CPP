/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afatir <afatir@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 09:16:18 by afatir            #+#    #+#             */
/*   Updated: 2023/07/18 04:29:40 by afatir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact 
{
public:
    Contact();
    ~Contact();

    void setFirstName(std::string firstname);
    void setLastName(std::string lastname);
    void setNickname(std::string nicKname);
    void setPhoneNumber(std::string phonenumber);
    void setDarkestSecret(std::string darkestsecret);

    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getPhoneNumber();
    std::string getDarkestSecret();

private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
};

#endif // CONTACT_HPP
