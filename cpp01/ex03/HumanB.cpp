/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:33:20 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 14:35:36 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string str )
{
    name = str;
}

void    HumanB::setWeapon( Weapon &wp )
{
    weapon = &wp;
}

void    HumanB::attack( void )
{
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}
