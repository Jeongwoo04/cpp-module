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

int	main(void)
{
	ClapTrap	a("A");
	ClapTrap	b("B");
	ClapTrap	c("C");

	a.attack("B");
	b.takeDamage(a.getDamage());
	b.attack("A");
	a.takeDamage(b.getDamage());
	c.attack("B");
	b.takeDamage(c.getDamage());
	a.beRepaired(25);
	return (0);
}