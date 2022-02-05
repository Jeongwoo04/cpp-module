/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:32:53 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 14:35:42 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    name = "no name zombie";
}

Zombie::Zombie( std::string str )
{
    name = str;
}

Zombie::~Zombie()
{
    std::cout << name << " : is gone" << std::endl;
}

void    Zombie::setName( std::string str )
{
    name = str;
}

void    Zombie::announce( void )
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}
