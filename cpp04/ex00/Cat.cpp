/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:19:00 by jeson             #+#    #+#             */
/*   Updated: 2022/02/14 12:27:51 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat default constructor is called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor is called" << std::endl;
}

Cat::Cat(const Cat& src)
{
	type = src.getType();
	std::cout << "Cat copy constuctor is called" << std::endl;
}

Cat&	Cat::operator=(const Cat& src)
{
	std::cout << "Cat assign is called" << std::endl;
	this->type = src.getType();
	return (*this);
}

// std::string	getType( void )const;

void	Cat::makeSound( void )const
{
	std::cout << " - Cat sound - " << std::endl;
}
