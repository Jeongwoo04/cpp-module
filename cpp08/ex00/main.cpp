/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:46:56 by jeson             #+#    #+#             */
/*   Updated: 2022/02/21 16:11:19 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <list>

template <typename T>
void	printf_easyFind(T& container, int val)
{
	try
	{
		typename T::iterator iter;
		iter = easyfind(container, val);
		std::cout << *iter << std::endl;
	}
	catch( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
}

int	main( void )
{
	std::vector<int>	_vector;
	std::deque<int>	_deque;
	std::list<int>	_list;

	for (int i = 0; i < 10; i++)
	{
		_vector.push_back(i);
		_deque.push_back(i);
		_list.push_back(i);
	}

	for (int i = 0; i < 11; i++)
	{
		std::cout << "_vector's easyfind val = ";
		printf_easyFind(_vector, i);

		std::cout << "_deque's easyfind val = ";
		printf_easyFind(_deque, i);

		std::cout << "_list's easyfind val = ";
		printf_easyFind(_list, i);
		std::cout << std::endl;
	}
	return (0);
}
