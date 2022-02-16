/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 14:39:19 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 14:56:31 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main( int argc, char **argv )
{
	if (argc != 2)
	{
		std::cerr << "Error: arguments\n";
		return (1);
	}
	return (0);
}
