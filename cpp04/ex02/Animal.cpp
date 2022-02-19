/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:05:45 by jeson             #+#    #+#             */
/*   Updated: 2022/02/17 11:34:06 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Animal default constuctor is called" << std::endl;
	this->type = "Animal";
}

Animal::Animal(const Animal& src): type(src.getType())
{
	std::cout << "Animal copy constuctor is called" << std::endl;
}

Animal::~Animal( void )
{
	std::cout << "Animal destructor is called" << std::endl;
}

Animal&	Animal::operator=(const Animal& src)
{
	std::cout << "Animal assign is called" << std::endl;
	this->type = src.getType();
	return (*this);
}

std::string	Animal::getType( void )const
{
	return ( type );
}
