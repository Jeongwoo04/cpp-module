/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:33:14 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 14:35:14 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &wp): name(str), weapon(wp)
{
}

void    HumanA::attack( void )
{
    std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
