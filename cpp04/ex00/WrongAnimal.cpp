/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:23:10 by jeson             #+#    #+#             */
/*   Updated: 2022/02/14 13:23:36 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "WrongAnimal default constuctor is called" << std::endl;
	this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal& src): type(src.getType())
{
	std::cout << "WrongAnimal copy constuctor is called" << std::endl;
	this->type = getType();
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "WrongAnimal destructor is called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& src)
{
	std::cout << "WrongAnimal assign is called" << std::endl;
	this->type = src.getType();
	return (*this);
}

std::string	WrongAnimal::getType( void )const
{
	return ( type );
}

void	WrongAnimal::makeSound( void )const
{
	std::cout << " - WrongAnimal sound - " << std::endl;
}
