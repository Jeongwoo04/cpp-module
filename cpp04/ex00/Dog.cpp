/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 17:19:12 by jeson             #+#    #+#             */
/*   Updated: 2022/02/12 17:27:42 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog default constructor is called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Dog destructor is called" << std::endl;
}

Dog::Dog(const Dog& src)
{
}

Dog&	Dog::operator=(const Dog& src)
{
}
