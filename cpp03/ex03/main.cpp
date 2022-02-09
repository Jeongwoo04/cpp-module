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
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	a("A");
	ScavTrap	b("B");

	a.attack("B");
	b.takeDamage(a.getDamage());

	b.attack("A");
	a.takeDamage(b.getDamage());

	a.attack("B");
	b.takeDamage(a.getDamage());

	b.attack("A");
	a.takeDamage(b.getDamage());

	b.guardGate();

	a.highFivesGuys();
	return (0);
}