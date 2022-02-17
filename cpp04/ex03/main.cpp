/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:29:20 by jeson             #+#    #+#             */
/*   Updated: 2022/02/17 11:07:53 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
IMateriaSource* src = new MateriaSource();
std::cout << std::endl;

src->learnMateria(new Ice());
src->learnMateria(new Cure());
std::cout << std::endl;

ICharacter* jeson = new Character("jeson");
std::cout << std::endl;

AMateria* tmp;
tmp = src->createMateria("Ice");
jeson->equip(tmp);
tmp = src->createMateria("Cure");
jeson->equip(tmp);
tmp = src->createMateria("Meteo");
jeson->equip(tmp);
std::cout << std::endl;

ICharacter* bob = new Character("bob");
std::cout << std::endl;

jeson->use(0, *bob);
jeson->use(1, *bob);
jeson->use(2, *bob);
std::cout << std::endl;

for (int i = 2; i < 5; i++)
{
	if (i % 2 == 0)
	{
		tmp = src->createMateria("Ice");
		jeson->equip(tmp);
		jeson->use(i, *bob);
		std::cout << std::endl;
	}
	else
	{
		tmp = src->createMateria("Cure");
		jeson->equip(tmp);
		jeson->use(i, *bob);
		std::cout << std::endl;
	}
}

delete bob;
delete jeson;
delete src;

return 0;
}
