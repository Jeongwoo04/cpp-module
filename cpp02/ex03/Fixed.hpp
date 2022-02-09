/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:50 by jeson             #+#    #+#             */
/*   Updated: 2022/02/07 19:12:44 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class	Fixed{
private:
	int	val;
	static const int frac_bits;

public:
	Fixed();
	Fixed(int i);
	Fixed(float f);
	Fixed(const Fixed& fixed);
	~Fixed();
	Fixed&	operator=(const Fixed& fixed);
	Fixed&	operator++();
	Fixed	operator++(int);
	Fixed&	operator--();
	Fixed	operator--(int);
	bool	operator>(const Fixed& fixed) const;
	bool	operator<(const Fixed& fixed) const;
	bool	operator>=(const Fixed& fixed) const;
	bool	operator<=(const Fixed& fixed) const;
	bool	operator==(const Fixed& fixed) const;
	bool	operator!=(const Fixed& fixed) const;
	Fixed	operator*(const Fixed& fixed) const;
	Fixed	operator/(const Fixed& fixed) const;
	Fixed	operator+(const Fixed& fixed) const;
	Fixed	operator-(const Fixed& fixed) const;
	static	Fixed&	max(Fixed& fixed1, Fixed& fixed2);
	static	Fixed const&	max(const Fixed& fixed1, const Fixed& fixed2);
	static	Fixed&	min(Fixed& fixed1, Fixed& fixed2);
	static	Fixed const&	min(const Fixed& fixed1, const Fixed& fixed2);

	int getRawBits( void ) const;
	void setRawBits(int const raw);
	float toFloat( void ) const;
	int	toInt( void ) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif
