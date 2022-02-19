/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:14:32 by jeson             #+#    #+#             */
/*   Updated: 2022/02/19 19:12:46 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main( void )
{
	int	int_Arr[] = {1, 2, 3};
	double	double_Arr[] = {1.01, 2.02, 3.03};
	std::string	string_Arr[] = {"1.00a", "2.00b", "3.00c"};

	iter(int_Arr, 3, &print_element);
	std::cout << std::endl;

	iter(double_Arr, 3, &print_element);
	std::cout << std::endl;

	iter(string_Arr, 3, &print_element);
	std::cout << std::endl;
	return ( 0 );
}
