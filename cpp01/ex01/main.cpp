/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:32:47 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 14:35:45 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
    Zombie *zombie;
    int i = 0;

    zombie = zombieHorde(9, "zombie");
    while (i < 9)
    {
        zombie[i].announce();
        i++;
    }
    delete [] zombie;
    return (0);
}
