/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 18:23:48 by jeson             #+#    #+#             */
/*   Updated: 2022/02/21 21:35:55 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int	main( void )
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << "\n=====================\n" << std::endl;
	{
		MutantStack<double> mstack;

		mstack.push(1.2);
		mstack.push(2.3);
		mstack.push(3.4);
		mstack.push(4.5);

		MutantStack<double>::const_iterator cit = mstack.cbegin();
		MutantStack<double>::const_iterator cite = mstack.cend();

		++cit;
		--cit;
		while (cit != cite)
		{
			std::cout << *cit << std::endl;
			++cit;
		}
	}
	std::cout << "\n=====================\n" << std::endl;
	{
		MutantStack<std::string> mstack;

		mstack.push("aa");
		mstack.push("bb");
		mstack.push("cc");
		mstack.push("dd");

		MutantStack<std::string>::reverse_iterator rit = mstack.rbegin();
		MutantStack<std::string>::reverse_iterator rite = mstack.rend();

		++rit;
		--rit;
		while (rit != rite)
		{
			std::cout << *rit << std::endl;
			++rit;
		}
	}
	return (0);
}
