/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:54 by jeson             #+#    #+#             */
/*   Updated: 2022/02/07 19:13:16 by jeson            ###   ########.fr       */
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

// Constructor const int
Fixed::Fixed(int i)
{
	std::cout << "Int constructor called" << std::endl;
}

// Constructor float
Fixed::Fixed(float f)
{
	std::cout << "Float constructor called" << std::endl;
}

// Copy constructor
Fixed::Fixed(const Fixed& origin)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = origin;
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

float	Fixed::toFloat( void ) const
{
}

int	Fixed::toInt( void ) const
{
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}
