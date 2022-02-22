/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:12:19 by jeson             #+#    #+#             */
/*   Updated: 2022/02/22 12:03:21 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main( void )
{
	{
		Array<int> a;
		Array<int> b(5);
		Array<int> c(b);
		c = a;

		std::cout << a.getN() << std::endl;
		std::cout << b.getN() << std::endl;
		std::cout << c.getN() << std::endl;
	}

	unsigned int i;
	{
		Array<int> a;
		Array<int> b(5);

		std::cout << "\na size : " << a.getN() << std::endl;
		std::cout << "b size : " << b.getN() << std::endl << std::endl;

		std::cout << "a : ";
		if ( !a.getN() )
			std::cout << "{}";
		for (i = 0; i < a.getN(); i++)
		{
			a[i] = i + 1;
			std::cout << a[i];
			if ( i + 1 == a.getN() )
				std::cout << "}";
			else
				std::cout << ", ";
		}
		std::cout << "\n\n";

		Array<int> d;
		d = b;

		std::cout << "b : {";
		for (i = 0; i < b.getN(); i++)
		{
			b[i] = 3;
			std::cout << b[i];
			if ( i + 1 == b.getN() )
				std::cout << "}";
			else
				std::cout << ", ";
		}
		std::cout << "\n\n";

		Array<int> c(b);
		std::cout << "c : {";
		for (i = 0; i < c.getN(); i++)
		{
			std::cout << c[i];
			if ( i + 1 == c.getN() )
				std::cout << "}";
			else
				std::cout << ", ";
		}
		std::cout << "\n\n";

		std::cout << "d : {";
		for (i = 0; i < d.getN(); i++)
		{
			std::cout << d[i];
			if ( i + 1 == d.getN() )
				std::cout << "}";
			else
				std::cout << ", ";
		}
		std::cout << "\n\n";

		std::cout << "======= out of range example =======\n" << std::endl;
		try
		{
			b[7] = 9;
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
	std::cout << "\n====================================\n" << std::endl;
	{
		std::cout << "===== string =====\n" << std::endl;
		Array<std::string> a;
		Array<std::string> b(3);

		std::cout << "a size : " << a.getN() << std::endl;
		std::cout << "b size : " << b.getN() << std::endl << std::endl;

		b[0] = "aa";
		b[1] = "bb";
		b[2] = "cc";

		std::cout << "b : {";
		for (i = 0; i < b.getN(); i++)
		{
			std::cout << b[i];
			if ( i + 1 == b.getN() )
				std::cout << "}";
			else
				std::cout << ", ";
		}
		std::cout << "\n\n";

		Array<std::string> c(b);
		Array<std::string> d;
		d = b;

		b[0] = "@@";
		b[1] = "@@";
		b[2] = "@@";

		std::cout << "b : {";
		for (i = 0; i < b.getN(); i++)
		{
			std::cout << b[i];
			if ( i + 1 == b.getN() )
				std::cout << "}";
			else
				std::cout << ", ";
		}
		std::cout << "\n\n";

		std::cout << "c : {";
		for (i = 0; i < c.getN(); i++)
		{
			std::cout << c[i];
			if ( i + 1 == c.getN() )
				std::cout << "}";
			else
				std::cout << ", ";
		}
		std::cout << "\n\n";

		std::cout << "d : {";
		for (i = 0; i < d.getN(); i++)
		{
			std::cout << d[i];
			if ( i + 1 == d.getN() )
				std::cout << "}";
			else
				std::cout << ", ";
		}
		std::cout << "\n\n";

		std::cout << "======= out of range example =======\n" << std::endl;
		try
		{
			b[7] = "@@";
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return ( 0 );
}
