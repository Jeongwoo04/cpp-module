/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:23:04 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 21:44:55 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main( void )
{
	try
	{
		Bureaucrat bur_err("doll", 151);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat bur_err1("pollar", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat bur("jeson", 148);
		std::cout << bur;
		for (int i = 0; i < 10; i++)
		{
			bur.decrementGrade();
			std::cout << bur;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		Bureaucrat bur("bob", 4);
		std::cout << bur;
		for (int i = 0; i < 10; i++)
		{
			bur.incrementGrade();
			std::cout << bur;
		}
	}
	catch(...)
	{
		std::cerr << "bob's grade is 0 good" << std::endl;
	}
	return ( 0 );
}
