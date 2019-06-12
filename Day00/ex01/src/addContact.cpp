/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   addContact.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:26:55 by pvan-ren          #+#    #+#             */
/*   Updated: 2019/06/05 13:10:37 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pb.class.hpp"

/*
** Asks for the info of a contact, and save that as a new contact.
*/

Contact
addContact(void)
{
    Contact     new_contact;
    std::string buffer;

    std::cout << "First name: ";
    std::cin >> buffer;
    new_contact.setFirstName(buffer);
    
    std::cout << "Last name: ";
    std::cin >> buffer;
    new_contact.setLastName(buffer);
    
    std::cout << "Nick name: ";
    std::cin >> buffer;
    new_contact.setNickname(buffer);
    
    std::cout << "Login: ";
    std::cin >> buffer;
    new_contact.setLogin(buffer);
    
    std::cout << "Postal Address: ";
    std::cin >> buffer;
    new_contact.setPostalAddress(buffer);
    
    std::cout << "Email Address: ";
    std::cin >> buffer;
    new_contact.setEmailAddress(buffer);
    
    std::cout << "Phone Number: ";
    std::cin >> buffer;
    new_contact.setPhoneNumber(buffer);
    
    std::cout << "Birthday: ";
    std::cin >> buffer;
    new_contact.setBirthdayDate(buffer);
    
    std::cout << "Favorite Meal: ";
    std::cin >> buffer;
    new_contact.setFavoriteMeal(buffer);
    
    std::cout << "Underwear Color: ";
    std::cin >> buffer;
    new_contact.setUnderwearColor(buffer);
    
    std::cout << "Darkest Secret: ";
    std::cin >> buffer;
    new_contact.setDarkestSecret(buffer);
    
    std::cout << "Info saved, use 'SEARCH' command to view phonebook." << std::endl;
    std::cout << "Type 'EXIT' to quit program (NOTE!, all contacts will be lost upon exiting)." << std::endl;
    
    return (new_contact);
}