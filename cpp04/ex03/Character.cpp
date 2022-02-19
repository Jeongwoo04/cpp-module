/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 12:32:32 by jeson             #+#    #+#             */
/*   Updated: 2022/02/17 10:46:48 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(): name("unknown")
{
	for (int i = 0; i < 4; i++)
		inven[i] = NULL;
	std::cout << "Character's name [ " << this->name << " ] is created" << std::endl;
}

Character::Character(std::string str): name(str)
{
	for (int i = 0; i < 4; i++)
		inven[i] = NULL;
	std::cout << "Character's name [ " << this->name << " ] is created" << std::endl;
}

Character::Character(const Character& src)
{
	this->name = src.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->inven[i])
		{
			delete this->inven[i];
			this->inven[i] = NULL;
		}
		if (src.inven[i])
			this->inven[i] = src.inven[i]->clone();
	}
	std::cout << "Copy " << src.getName() << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete inven[i];
		inven[i] = NULL;
	}
	std::cout << this->name << " : Destructor is called" << std::endl;
}

Character&	Character::operator=(const Character& src)
{
	if (this == &src)
		return ( *this );
	this->name = src.getName();
	for (int i = 0; i < 4; i++)
	{
		if (this->inven[i])
		{
			delete this->inven[i];
			this->inven[i] = NULL;
		}
		if (src.inven[i])
			this->inven[i] = src.inven[i]->clone();
	}
	return ( *this );
}

std::string const&	Character::getName() const
{
	return ( this->name );
}

void	Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (inven[i] == NULL)
		{
			inven[i] = m;
			std::cout << "[Inventory " << i << " ] " << m->getType() <<" equiped" << std::endl;
			return ;
		}
	}
	std::cout << "[Inventory is full] can't equip" << std::endl;
}

void	Character::unequip(int idx)
{
	if (!(idx >= 0 && idx <= 3) || !inven[idx])
	{
		std::cout << "isn't exist inventory" << std::endl;
		return ;
	}
	inven[idx] = NULL;
	std::cout << "[Inventory " << idx << " ] unequiped" << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (!(idx >= 0 && idx <= 3) || !inven[idx])
	{
		std::cout << "isn't exist inventory ["<< idx << "]" << std::endl;
		return ;
	}
	inven[idx]->use(target);
}
