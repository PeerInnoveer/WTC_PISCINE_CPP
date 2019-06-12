/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:36:23 by pvan-ren          #+#    #+#             */
/*   Updated: 2019/06/05 15:36:42 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheHeap()
{
    Pony*  ponyOnTheHeap = new Pony(44, 20 ,"black" , "hyperpony");
    delete ponyOnTheHeap;
};
void    ponyOnTheStack()
{
    Pony ponyOnTheStack = Pony(10, 155,"green" ,"Lazypony" );
};

int main()
{
    ponyOnTheHeap();
    std::cout << std::endl;
    ponyOnTheStack();
    
    return (0);
}