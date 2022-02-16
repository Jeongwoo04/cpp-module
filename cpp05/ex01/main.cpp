/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 15:23:04 by jeson             #+#    #+#             */
/*   Updated: 2022/02/16 21:58:21 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main( void )
{
	std::cout << "[\tform initialized err : grade too high\t]" << std::endl;
	try
	{
		Form form("form", 0, 0);
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;;
	}
	std::cout << std::endl;
	std::cout << "[\tform initialized err : grade too low\t]" << std::endl;
	try
	{
		Form form("form", 151, 151);
		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "[\tform & bureaucrat initialized success\t]" << std::endl;
	try
	{
		std::cout << std::endl;
		Form form("form", 100, 100);
		std::cout << form << std::endl;
		std::cout << std::endl;

		Bureaucrat jeson("jeson", 50);
		std::cout << jeson << std::endl;

		std::cout << "[\t" << jeson.getName() <<"'s form result\t]" << std::endl;
		jeson.signForm(form);
		std::cout << std::endl;

		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		std::cout << std::endl;
		Form form("form", 50, 100);
		std::cout << form << std::endl;
		std::cout << std::endl;

		Bureaucrat pollar("pollar", 100);
		std::cout << pollar << std::endl;

		std::cout << "[\t" << pollar.getName() << "'s form result\t]" << std::endl;
		pollar.signForm(form);
		std::cout << std::endl;

		std::cout << form << std::endl;

		std::cout << std::endl;
		std::cout << "IncrementGrade 60 times"<< std::endl;
		std::cout << std::endl;
		for (int i = 0; i < 60; i++)
			pollar.incrementGrade();
		std::cout << "[\t" << pollar.getName() <<"'s form result\t]" << std::endl;
		pollar.signForm(form);
		std::cout << std::endl;

		std::cout << form << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return ( 0 );
}
