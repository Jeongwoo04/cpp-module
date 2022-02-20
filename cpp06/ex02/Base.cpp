/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:40:52 by jeson             #+#    #+#             */
/*   Updated: 2022/02/20 13:59:20 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
}

// that randomly instanciates A, B or C and returns the instance as a Base pointer.
// Feel free to use anything you like for the randomness.
Base* generate(void)
{
	int r = std::rand() % 3;

	switch(r)
	{
		case 0:
			return new A();
		case 1:
			return new B();
		case 2:
			return NULL;
			// return new C();
		default:
			return (NULL);
	}
}

// that displays "A", "B" or "C" according to the real type of p.

// can't -> return NULL;
void	identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

// You should never use a pointer inside this function.
// that displays "A", "B" or "C" according to the real type of p.

// can't -> throw Exception !
void	identify(Base& p)
{
	Base tmp;

	if (is_null(p))
	{
		std::cout << "Unknown type" << std::endl;
		return ;
	}
	try
	{
		tmp = dynamic_cast<A&>(p);
		std::cout << "A";
		return;
	}
	catch (std::exception &e)
	{
	}

	try
	{
		tmp = dynamic_cast<B&>(p);
		std::cout << "B";
		return;
	}
	catch (std::exception &e)
	{
	}

	try
	{
		tmp = dynamic_cast<C&>(p);
		std::cout << "C";
		return;
	}
	catch (std::exception &e)
	{
	}
	std::cout << "Unknown type" << std::endl;
}

bool	is_null(Base& p)
{
	Base* tmp;
	tmp = &p;
	if (tmp == NULL)
		return (true);
	return (false);
}
