/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:16:50 by pvan-ren          #+#    #+#             */
/*   Updated: 2019/06/05 16:08:31 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

//set private vars to params
Pony::Pony(int height, int weight, std::string color, std::string name)
{
    this->_height = height;
    this->_weight = weight;
    this->_color = color;
    this->_name = name;

    std::cout << this->_name << " was born." << std::endl;
    std::cout << this->_name << " is " << this->_color << std::endl;
    std::cout << this->_name << " weighs " << this->_weight << " kg" << std::endl;
    std::cout << this->_name << "'s height is " << this->_height << " mm" << std::endl;  
}
Pony::~Pony()
{
    std::cout << this->_name << " died." << std::endl;
}