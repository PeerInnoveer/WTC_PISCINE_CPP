/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:27:27 by pvan-ren          #+#    #+#             */
/*   Updated: 2019/06/05 13:15:57 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pb.class.hpp"

static void menu(void)
{
	std::cout << "Available commands:" << std::endl;
    std::cout << std::endl;
    std::cout << "ADD" << std::endl;
    std::cout << "SEARCH" << std::endl;
    std::cout << "EXIT" << std::endl;
    std::cout << std::endl;
}

int main(void)
{
    int             contact_index;
    Contact         phonebook[MAX_CONTACTS];
    std::string     command;

    menu();
    contact_index = 0;
    while (1)
    {
        getline(std::cin, command, '\n');
        if (command == "ADD")
        {
            if (contact_index < MAX_CONTACTS)
                phonebook[contact_index++] = addContact();
            else
                std::cout << "Phonebook is full!" << std::endl;
        }
        else if (command == "SEARCH")
        {
            if (contact_index > 0)
                showPhonebook(phonebook, contact_index);
            else
                std::cout << "Phonebook is empty." << std::endl;
        }
        else if (command == "EXIT")
        {
            break ;
        }
    }
    return (0);
}