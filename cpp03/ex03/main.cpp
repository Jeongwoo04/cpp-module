/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:56 by jeson             #+#    #+#             */
/*   Updated: 2022/02/12 14:35:54 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a("A");
	std::cout << std::endl;
	DiamondTrap b("B");
	std::cout << std::endl;
	DiamondTrap c("C");
	std::cout << std::endl;

	a.whoAmI();
	b.whoAmI();
	c.whoAmI();
	std::cout << std::endl;

	a.highFivesGuys();
	b.highFivesGuys();
	c.highFivesGuys();
	std::cout << std::endl;

	a.attack("B");
	b.takeDamage(a.getDamage());
	std::cout << std::endl;

	b.attack("C");
	c.takeDamage(b.getDamage());
	std::cout << std::endl;

	c.attack("A");
	a.takeDamage(c.getDamage());
	std::cout << std::endl;

	a.guardGate();
	b.guardGate();
	c.guardGate();
	std::cout << std::endl;

	DiamondTrap d;
	d.whoAmI();
	std::cout << std::endl;

	d = a;
	d.whoAmI();
	std::cout << std::endl;
	// d = a -> d (default con -> assign a) -> A destuctors called
	return (0);
}
