/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:41:14 by jeson             #+#    #+#             */
/*   Updated: 2022/02/21 17:48:13 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int	main( void )
{
	Base* tmp;

	for (int i = 0; i < 10; i++)
	{
		tmp = generate();

		std::cout << "identify pointer : ";
		identify(tmp);
		std::cout << "identify reference : ";
		identify(*tmp);
		std::cout << '\n' << std::endl;

		delete tmp;
	}

	// up -> down -> err // solution) using dynamic_cast !

	return ( 0 );
}
