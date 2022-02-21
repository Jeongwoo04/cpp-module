/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:12:43 by jeson             #+#    #+#             */
/*   Updated: 2022/02/21 19:39:23 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int	main( void )
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl;

	// ================================ //

	try
	{
		Span sp = Span(3);

		for (unsigned int i = 1; i <= 3; i++)
		{
			sp.addNumber(i);
			std::cout << "addNumber " << i << std::endl;
		}
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Span sp = Span(3);

		sp.addNumber(1);
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::vector<unsigned int> _v;
		for (unsigned int i = 1; i <= 10000; i++)
			_v.push_back(i * 2);

		Span sp = Span(_v.size());
		sp.addRange(_v.begin(), _v.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		std::vector<unsigned int> _v;
		for (unsigned int i = 1; i <= 10001; i++)
			_v.push_back(i * 3);

		Span sp = Span(_v.size() - 1);
		sp.addRange(_v.begin(), _v.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch( std::exception& e )
	{
		std::cout << e.what() << std::endl;
	}

	return ( 0 );
}
