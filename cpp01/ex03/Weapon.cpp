/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:33:27 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 14:35:51 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string str )
{
    name = str;
}

void    Weapon::setType( std::string str )
{
    name = str;
}

const std::string& Weapon::getType( void )
{
    return (name);
}
