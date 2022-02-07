/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:50 by jeson             #+#    #+#             */
/*   Updated: 2022/02/07 18:32:44 by jeson            ###   ########.fr       */
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
	Fixed(const Fixed& origin);
	~Fixed();
	Fixed& operator=(const Fixed& fixed);

	int getRawBits( void ) const;
	void setRawBits(int const raw);
};

#endif
