/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:03:44 by jeson             #+#    #+#             */
/*   Updated: 2022/02/15 15:00:12 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("Cure")
{
}

Cure::Cure(const Cure& src): AMateria(src.getType())
{
}

Cure::~Cure()
{
}

Cure&	Cure::operator=(const Cure& src)
{
	this->type = src.getType();
	return ( *this );
}

AMateria*	Cure::clone() const
{
	AMateria *cure = new Cure();
	return ( cure );
}

void	Cure::use(ICharacter& src)
{
	std::cout << "* heals "<< src.getName() << "'s wounds *" << std::endl;
}
