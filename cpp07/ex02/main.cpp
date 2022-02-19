/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 19:12:19 by jeson             #+#    #+#             */
/*   Updated: 2022/02/19 22:58:17 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "array.hpp"

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

		for (i = 0; i < 5; i++)
			b[i] = i + 1;

		std::cout << "b : ";
		for (i = 0; i < 5; i++)
			std::cout << b[i] << " ";
		std::cout << "\n\n";

		Array<int> c(b);
		Array<int> d;
		d = b;

		for (i = 0; i < 5; i++)
			b[i] = 9;

		std::cout << "b : ";
		for (i = 0; i < 5; i++)
			std::cout << b[i] << " ";
		std::cout << "\n\n";
		std::cout << "c : ";
		for (i = 0; i < 5; i++)
			std::cout << c[i] << " ";
		std::cout << "\n\n";
		std::cout << "d : ";
		for (i = 0; i < 5; i++)
			std::cout << d[i] << " ";
		std::cout << "\n\n";

		try
		{
			b[7] = 9;
		}
		catch(std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}

	}
	std::cout << "---------------------------------------" << std::endl;
	{
		Array<std::string> a;
		Array<std::string> b(3);

		std::cout << "a size: " << a.getN() << std::endl;
		std::cout << "b size: " << b.getN() << std::endl << std::endl;

		b[0] = "aa";
		b[1] = "bb";
		b[2] = "cc";

		std::cout << "b : ";
		for (i = 0; i < 3; i++)
			std::cout << b[i] << " ";
		std::cout << "\n\n";

		Array<std::string> c(b);
		Array<std::string> d;
		d = b;

		b[0] = "@@";
		b[1] = "@@";
		b[2] = "@@";

		std::cout << "b : ";
		for (i = 0; i < 3; i++)
			std::cout << b[i] << " ";
		std::cout << "\n\n";
		std::cout << "c : ";
		for (i = 0; i < 3; i++)
			std::cout << c[i] << " ";
		std::cout << "\n\n";
		std::cout << "d : ";
		for (i = 0; i < 3; i++)
			std::cout << d[i] << " ";
		std::cout << "\n\n";

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
