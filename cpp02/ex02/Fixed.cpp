/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:54 by jeson             #+#    #+#             */
/*   Updated: 2022/02/12 10:36:06 by jeson            ###   ########.fr       */
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

// Constructor const int
Fixed::Fixed(int i)
{
	std::cout << "Int constructor called" << std::endl;
	this->val = i << frac_bits;
}

// Constructor float
Fixed::Fixed(float f)
{
	std::cout << "Float constructor called" << std::endl;
	this->val = roundf(f * (1 << frac_bits));
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

Fixed&	Fixed::operator++()
{
	val++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	val++;
	return (tmp);
}

Fixed&	Fixed::operator--()
{
	val--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp = *this;
	val--;
	return (tmp);
}

bool	Fixed::operator>(const Fixed& fixed) const
{
	return ( this->val > fixed.val );
}

bool	Fixed::operator<(const Fixed& fixed) const
{
	return ( this->val < fixed.val );
}

bool	Fixed::operator>=(const Fixed& fixed) const
{
	return ( this->val >= fixed.val );
}

bool	Fixed::operator<=(const Fixed& fixed) const
{
	return ( this->val <= fixed.val );
}

bool	Fixed::operator==(const Fixed& fixed) const
{
	return ( this->val == fixed.val );
}

bool	Fixed::operator!=(const Fixed& fixed) const
{
	return ( this->val != fixed.val );
}

Fixed	Fixed::operator*(const Fixed& fixed) const
{
	return ( Fixed( this->toFloat() * fixed.toFloat() ) );
}

Fixed	Fixed::operator/(const Fixed& fixed) const
{
	return ( Fixed( this->toFloat() / fixed.toFloat() ) );
}

Fixed	Fixed::operator+(const Fixed& fixed) const
{
	return ( Fixed( this->toFloat() + fixed.toFloat() ) );
}

Fixed	Fixed::operator-(const Fixed& fixed) const
{
	return ( Fixed( this->toFloat() - fixed.toFloat() ) );
}

Fixed&	Fixed::max(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1.toFloat() > fixed2.toFloat())
		return ( fixed1 );
	return ( fixed2 );
}

Fixed const&	Fixed::max(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1.toFloat() > fixed2.toFloat())
		return ( fixed1 );
	return ( fixed2 );
}

Fixed&	Fixed::min(Fixed& fixed1, Fixed& fixed2)
{
	if (fixed1.toFloat() < fixed2.toFloat())
		return ( fixed1 );
	return ( fixed2 );
}

Fixed const&	Fixed::min(const Fixed& fixed1, const Fixed& fixed2)
{
	if (fixed1.toFloat() < fixed2.toFloat())
		return ( fixed1 );
	return ( fixed2 );
}
