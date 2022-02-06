/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:51:27 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 20:10:29 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	_error(std::string str)
{
	std::cerr << str << std::endl;
	return (1);
}

int	main( int argc, char **argv )
{
	if (argc < 2)
		return (_error("wrong command"));
	Karen karen;

	for(int i = 1; i < argc; i++)
	{
		karen.complain(argv[i]);
		std::cout << "----------------------------------------------------------------" << std::endl;
	}
	return (0);
}
