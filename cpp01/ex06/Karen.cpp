/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 18:51:29 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 20:13:59 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen()
{
	str[0] = "DEBUG";
	str[1] = "INFO";
	str[2] = "WARNING";
	str[3] = "ERROR";

	p[0] = &Karen::debug;
	p[1] = &Karen::info;
	p[2] = &Karen::warning;
	p[3] = &Karen::error;
}

Karen::~Karen()
{
}

void Karen::debug( void )
{
	std::cout << "DEBUG\n" ;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info( void )
{
	std::cout << "INFO\n" ;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning( void )
{
	std::cout << "WARNING\n" ;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error( void )
{
	std::cout << "ERROR\n" ;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

//
void Karen::complain( std::string level )
{
	int i = -1;

	for (int idx = 0; idx < 4; idx++)
	{
		if (level == str[idx])
			i = idx;
	}
	switch( i )
	{
		case DEBUG:
			(this->*p[DEBUG])();
		case INFO:
			(this->*p[INFO])();
		case WARNING:
			(this->*p[WARNING])();
		case ERROR:
			(this->*p[ERROR])();
			break ;
		default:
			std::cout << "wrong option" << std::endl;
	}
}
