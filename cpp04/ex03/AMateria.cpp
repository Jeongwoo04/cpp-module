/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:31:48 by jeson             #+#    #+#             */
/*   Updated: 2022/02/15 14:47:44 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): type("none")
{
}

AMateria::AMateria(std::string const & type): type(type)
{
}

AMateria::AMateria(const AMateria & src): type(src.getType())
{
}

AMateria::~AMateria()
{
}

AMateria&	AMateria::operator=(const AMateria & src)
{
	this->type = src.getType();
	return (*this);
}

std::string const&	AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout <<  "* none * " << target.getName() << std::endl;
}
