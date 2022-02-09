/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:54 by jeson             #+#    #+#             */
/*   Updated: 2022/02/07 18:42:21 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// static initialize
const int	Fixed::frac_bits = 8;

// Default constructor
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	val = 0;
}

// Copy constructor
Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

// Destructor
Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

// Assignation operator
Fixed& Fixed::operator=(const Fixed& target)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &target)
		val = target.getRawBits();
	return (*this);
}

// getfunc
int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return ( val );
}

// setfunc
void	Fixed::setRawBits( int const raw )
{
	val = raw;
}
