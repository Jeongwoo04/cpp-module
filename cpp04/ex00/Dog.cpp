/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:19:12 by jeson             #+#    #+#             */
/*   Updated: 2022/02/14 12:33:39 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor is called" << std::endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	std::cout << "Dog destructor is called" << std::endl;
}

Dog::Dog(const Dog& src)
{
	type = src.getType();
	std::cout << "Dog copy constuctor is called" << std::endl;
}

Dog&	Dog::operator=(const Dog& src)
{
	std::cout << "Dog assign is called" << std::endl;
	this->type = src.getType();
	return (*this);
}

// std::string	getType( void )const;

void	Dog::makeSound( void )const
{
	std::cout << " - Dog sound - " << std::endl;
}
