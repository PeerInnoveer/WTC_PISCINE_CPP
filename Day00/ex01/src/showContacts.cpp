/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   showContacts.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:26:28 by pvan-ren          #+#    #+#             */
/*   Updated: 2019/06/05 13:03:52 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pb.class.hpp"

/*
** Ask for the index of a contact, and outputs the information if it exists.
*/

static void searchContact(Contact phonebook[], int nbr_contacts)
{
    int          index;

    std::cout << "To see full details of contact, enter the index number: ";
    std::cin >> index;
    std::cout << std::endl;
    if (std::cin.good() && (index >= 0 && index < nbr_contacts))
    {
        std::cout << phonebook[index].getFirstName() << std::endl;
        std::cout << phonebook[index].getLastName() << std::endl;
        std::cout << phonebook[index].getNickname() << std::endl;
        std::cout << phonebook[index].getLogin() << std::endl;
        std::cout << phonebook[index].getPostalAddress() << std::endl;
        std::cout << phonebook[index].getEmailAddress() << std::endl;
        std::cout << phonebook[index].getPhoneNumber() << std::endl;
        std::cout << phonebook[index].getBirthdayDate() << std::endl;
        std::cout << phonebook[index].getFavoriteMeal() << std::endl;
        std::cout << phonebook[index].getUnderWearColor() << std::endl;
        std::cout << phonebook[index].getDarkestSecret() << std::endl;
    }
    else
    {
        std::cin.clear();
        std::cout << "Sorry, that index cannot be found, try number between 0-10." << std::endl;
    }
}

/*
** Truncate a contact field if the length is larger than FIELD_WIDTH.
** The last displayable character is replaced by a dot ('.').
*/

static std::string
truncateContact(std::string field)
{
    field = field.erase((FIELD_WIDTH - 1), \
    field.length() - (FIELD_WIDTH - 1));
    field.append(".");
    return (field);
}

/*
** Shows the contacts of the phonebook.
** If one of the fields is larger than the maximum width, it'll be truncated.
*/

void
showPhonebook(Contact phonebook[], int nbr_contacts)
{
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;

    std::cout << std::setw(FIELD_WIDTH);
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (int i = 0; i < nbr_contacts; i++)
    {
        first_name = phonebook[i].getFirstName();
        last_name = phonebook[i].getLastName();
        nickname = phonebook[i].getNickname();

        std::cout << "|" << std::setw(FIELD_WIDTH) << i;
        first_name = (first_name.length() > FIELD_WIDTH) ? \
            truncateContact(first_name) : first_name;
        std::cout << "|" << std::setw(FIELD_WIDTH) << first_name;

        last_name = (last_name.length() > FIELD_WIDTH) ? \
            truncateContact(last_name) : last_name;
        std::cout << "|" << std::setw(FIELD_WIDTH) << last_name;

        nickname = (nickname.length() > FIELD_WIDTH) ? \
            truncateContact(nickname) : nickname;
        std::cout << "|" << std::setw(FIELD_WIDTH) << nickname;
        std::cout << "|" << std::endl;
    }
    searchContact(phonebook, nbr_contacts);
}