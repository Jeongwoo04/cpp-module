/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:56 by jeson             #+#    #+#             */
/*   Updated: 2022/02/12 10:42:06 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) ); // Fixed( 5.05f ) & Fixed ( 2 ) destructed

std::cout << a << std::endl;// 0
std::cout << ++a << std::endl;// 0.00390625
std::cout << a << std::endl;// 0.00390625
std::cout << a++ << std::endl;// 0.00390625
std::cout << a << std::endl;// 0.0078125
// a++; // operator++(int) tmp destructed

std::cout << b << std::endl;// 10.1016
// std::cout << b++ << std::endl; b is called by const constructor

std::cout << Fixed::max( a, b ) << std::endl;// 10.1016

return 0;
}
