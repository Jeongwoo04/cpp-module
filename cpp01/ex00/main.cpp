/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 20:21:56 by jeson             #+#    #+#             */
/*   Updated: 2022/02/01 20:24:31 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zombie1;
	Zombie z = Zombie();

	zombie1 = newZombie("zombie1");
	zombie1->announce();
	randomChump("zombie2");
	delete zombie1;
	return (0);
}
