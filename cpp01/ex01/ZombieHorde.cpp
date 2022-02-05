/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:32:59 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 14:35:38 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string str )
{
    Zombie *zombie;
    int i = 0;

    zombie = new Zombie[N];
    while (i < N)
    {
        std::stringstream stream;
        stream << i + 1;
        zombie[i].setName(str + stream.str());
        i++;
    }
    return (zombie);
}
