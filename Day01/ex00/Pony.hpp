/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pvan-ren <pvan-ren@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 15:36:55 by pvan-ren          #+#    #+#             */
/*   Updated: 2019/06/05 15:38:53 by pvan-ren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
    private:
        int             _height;
        int             _weight;
        std::string     _color;
        std::string     _name;

    public:
        Pony(int height, int weight, std::string color, std::string name);
        ~Pony();
};

#endif