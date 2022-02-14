/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:45:56 by jeson             #+#    #+#             */
/*   Updated: 2022/02/14 15:42:28 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ): size( 0 )
{
	std::cout << "Brain default constuctor is called" << std::endl;
	clearBrain();
}

Brain::Brain(const Brain& src)
{
	std::cout << "Brain copy constuctor is called" << std::endl;
	this->size = src.size;
	for (int i = 0; i < src.size; i++)
		this->ideas[i] = src.ideas[i];
}

Brain::~Brain( void )
{
	std::cout << "Brain destructor is called" << std::endl;
}

Brain&	Brain::operator=(const Brain& src)
{
	std::cout << "Brain assign is called" << std::endl;
	for (int i = 0; i < src.size; i++)
		this->ideas[i] = src.ideas[i];
	this->size = src.size;
	return (*this);
}

int	Brain::getSize()
{
	return ( size );
}

void	Brain::setIdeas( std::string* ideas, int size )
{
	clearBrain();
	if ( size <= 100 )
		this->size = size;
	else
		this->size = 100;
	for (int i = 0; i < this->size; i++)
		this->ideas[i] = ideas[i];
}

std::string*	Brain::getIdeas()
{
	return ( ideas );
}

void	Brain::clearBrain()
{
	for (int i = 0; i < this->size; i++)
		ideas[i].clear();
}
