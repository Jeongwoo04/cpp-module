/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 19:03:35 by jeson             #+#    #+#             */
/*   Updated: 2022/02/15 15:00:23 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("Ice")
{
}

Ice::Ice(const Ice& src): AMateria(src.getType())
{
}

Ice::~Ice()
{
}

Ice&	Ice::operator=(const Ice& src)
{
	if (this == &src)
		return ( *this );
	this->type = src.getType();
	return ( *this );
}

AMateria*	Ice::clone() const
{
	AMateria *ice = new Ice();
	return ( ice );
}

void	Ice::use(ICharacter& src)
{
	std::cout << "* shoots an ice bolt at "<< src.getName() <<" *" << std::endl;
}
