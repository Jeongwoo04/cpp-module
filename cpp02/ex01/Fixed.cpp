/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:54 by jeson             #+#    #+#             */
/*   Updated: 2022/02/12 11:06:38 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
// sibal;;
// static initialize
const int	Fixed::frac_bits = 8;

// Default constructor
Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	val = 0;
}

// int Constructor takes const integer
Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called" << std::endl;
	val = i << frac_bits;
}

// float Constructor takes floating point
Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called" << std::endl;
	val = roundf(f * (1 << frac_bits));
}

// Copy constructor
Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	this->val = fixed.getRawBits();
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
	if (this == &target)
		return (*this);
	this->val = target.getRawBits();
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

float	Fixed::toFloat( void ) const
{
	return ((float)val / (1 << frac_bits));
}

int	Fixed::toInt( void ) const
{
	return (val >> 8);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
