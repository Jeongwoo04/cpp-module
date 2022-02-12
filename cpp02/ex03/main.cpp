/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 17:44:56 by jeson             #+#    #+#             */
/*   Updated: 2022/02/12 10:01:29 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"

int main( void )
{
    Point a(0, 0);
    Point b(5, 0);
    Point c(2.5, 5);
    Point d(3, 0.0);

    if (bsp(a, b, c, d))
        std::cout << d << " is in the triangle !" << std::endl;
    else
        std::cout << d << " is out of triangle !" << std::endl;

    return 0;
}
