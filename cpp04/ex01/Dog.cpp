/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:19:12 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 21:13:19 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor is called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor is called" << std::endl;
	delete this->brain;
}

Dog::Dog(const Dog& src)
{
	std::cout << "Dog copy constuctor is called" << std::endl;
	this->type = src.getType();
	this->brain = new Brain();
	// this->brain = src.brain;
	setBrainIdeas( src.brain->getIdeas(), src.brain->getSize() );
}

Dog&	Dog::operator=(const Dog& src)
{
	std::cout << "Dog assign is called" << std::endl;
	if (this == &src)
		return (*this);
	this->type = src.getType();
	setBrainIdeas( src.brain->getIdeas(), src.brain->getSize() );
	return (*this);
}

// std::string	getType( void )const;

void	Dog::makeSound( void )const
{
	std::cout << " - Dog sound - " << std::endl;
}

void	Dog::setBrainIdeas( std::string *ideas, int size )
{
	this->brain->setIdeas( ideas, size );
}

std::string*	Dog::getBrainIdeas( void )
{
	return ( brain->getIdeas() );
}

int	Dog::getBrainSize( void )
{
	return ( brain->getSize() );
}

void	Dog::printf_dog_ideas( void )
{
	std::string*	dog_ideas = this->getBrainIdeas();
	int	size = this->getBrainSize();

	for (int i = 0; i < size; i++)
		std::cout << "ideas[ "<< i << " ] : "<< dog_ideas[i] << std::endl;
}
