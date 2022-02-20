/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:39:19 by jeson             #+#    #+#             */
/*   Updated: 2022/02/20 11:57:44 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cerr << "Error: arguments\n";
		return (1);
	}
	std::cout << "=========== Converting print ===========\n" << std::endl;

	Convert c(argv[1]);
	c.printf();
	std::cout << std::endl;

	std::cout << "=========== finish ===========" << std::endl;
	return (0);
}
