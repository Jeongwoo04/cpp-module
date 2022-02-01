/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 17:03:09 by jeson             #+#    #+#             */
/*   Updated: 2022/02/01 20:14:17 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phbook.hpp"

int	main(void)
{
	std::string ch;
	Phbook Phbook;
	int	idx = 0;

	while (!std::cin.eof())
	{
		std::cout << "Menu : (E)XIT | (A)DD | (S)EARCH"<< std::endl;
		std::getline(std::cin, ch);
		if (ch == "EXIT" || ch == "E")
			break ;
		else if (ch == "ADD" || ch == "A")
		{
			idx %= 8;
			Phbook.add(idx);
			idx++;
		}
		else if (ch == "SEARCH" || ch == "S")
		 	Phbook.search();
	}
	std::cout << "exit phone book" << std::endl;
	return (0);
}
