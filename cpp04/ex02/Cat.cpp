/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 15:38:42 by jeson             #+#    #+#             */
/*   Updated: 2022/02/14 17:54:06 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor is called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor is called" << std::endl;
	delete this->brain;
}

// deep copy vs shallow copy -> pointer variable in class member

Cat::Cat(const Cat& src)
{
	std::cout << "Cat copy constuctor is called" << std::endl;
	this->type = src.getType();
	this->brain = new Brain();
	// this->brain = src.brain;
	setBrainIdeas( src.brain->getIdeas(), src.brain->getSize() );
}

Cat&	Cat::operator=(const Cat& src)
{
	std::cout << "Cat assign is called" << std::endl;
	if (this == &src)
		return (*this);
	this->type = src.getType();
	setBrainIdeas( src.brain->getIdeas(), src.brain->getSize() );
	return (*this);
}

// std::string	getType( void )const;

void	Cat::makeSound( void )const
{
	std::cout << " - Cat sound - " << std::endl;
}

void	Cat::setBrainIdeas( std::string *ideas, int size )
{
	this->brain->setIdeas( ideas, size );
}

std::string*	Cat::getBrainIdeas( void )
{
	return ( brain->getIdeas() );
}

int	Cat::getBrainSize( void )
{
	return ( brain->getSize() );
}
