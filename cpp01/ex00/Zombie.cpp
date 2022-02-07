/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:22:07 by jeson             #+#    #+#             */
/*   Updated: 2022/02/01 20:22:07 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
    name = "no name zombie";
    std::cout << name << std::endl;
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie( std::string str )
{
    name = str;
}

Zombie::~Zombie()
{
    std::cout << name << " : is gone" << std::endl;
}

void    Zombie::announce( void )
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}