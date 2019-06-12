/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 14:45:53 by pvan-ren          #+#    #+#             */
/*   Updated: 2019/06/07 15:24:57 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

/* This function was givin to us in the pdf and we had to free the memory that
** was allocated to the heap. I figured the easiest way of doing it would be
** to make use of the 'delete' operator. There is another way of doing it, go figure. */

void    memoryLeak()
{
    std::string*    panthere = new std::string("String panthere");

    std::cout << *panthere << std::endl;
    delete panthere;
}

int main() {
    
    std::cout << panthere;
    return (0);
}
