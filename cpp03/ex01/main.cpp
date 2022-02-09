/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:56 by jeson             #+#    #+#             */
/*   Updated: 2022/02/07 18:38:45 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap	a("A");
	ScavTrap	b("B");
	
	a.attack("b");
	b.takeDamage(a.getDamage());

	b.attack("a");
	a.takeDamage(b.getDamage());

	a.attack("b");
	b.takeDamage(a.getDamage());

	b.attack("a");
	a.takeDamage(b.getDamage());

	b.guardGate();
	return (0);
}