/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:37:08 by jeson             #+#    #+#             */
/*   Updated: 2022/02/15 15:04:09 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		inven[i] = NULL;
	std::cout << "MateriaSource's constructor is called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& src)
{
	for (int i = 0; i < 4; i++)
		this->inven[i] = src.inven[i];
	std::cout << "MateriaSource's copy constructor is called" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete inven[i];
	std::cout << "MateriaSource's destructor is called" << std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& src)
{
	if (this == &src)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		if (this->inven[i])
		{
			delete inven[i];
			inven[i] = NULL;
		}
		if (src.inven[i])
			this->inven[i] = src.inven[i]->clone();
	}
	return ( *this );
}

void	MateriaSource::learnMateria(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (inven[i] == NULL)
		{
			inven[i] = m;
			std::cout << "[Inventory "<< i <<" ] : Learned " << m->getType() << " type" << std::endl;
			return ;
		}
	}
	std::cout << "[Inventory is full]" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (inven[i] && inven[i]->getType() == type)
			return (inven[i]->clone());
	}
	std::cout << type << " isn't exist in inventory" << std::endl;
	return (NULL);
}
