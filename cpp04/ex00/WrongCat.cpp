/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 13:24:18 by jeson             #+#    #+#             */
/*   Updated: 2022/02/14 13:24:19 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat default constructor is called" << std::endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor is called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& src)
{
	type = src.getType();
	std::cout << "WrongCat copy constuctor is called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& src)
{
	std::cout << "WrongCat assign is called" << std::endl;
	this->type = src.getType();
	return (*this);
}

// std::string	getType( void )const;

void	WrongCat::makeSound( void )const
{
	std::cout << " - WrongCat sound - " << std::endl;
}
