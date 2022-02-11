/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:56 by jeson             #+#    #+#             */
/*   Updated: 2022/02/11 17:46:46 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a("A");

	a.whoAmI();
	{
		DiamondTrap b("B");
		DiamondTrap c("C");

		b.whoAmI();
		c.whoAmI();
		c.highFivesGuys();

		b.attack("C");
		c.takeDamage(b.getDamage());

		b.attack("C");
		c.takeDamage(b.getDamage());

		b.guardGate();
	}
	DiamondTrap d;

	d.whoAmI();
	d = a;
	d.whoAmI();
	return (0);
}
