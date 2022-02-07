/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phbook.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 18:02:54 by jeson             #+#    #+#             */
/*   Updated: 2022/02/01 20:07:28 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phbook.hpp"

Phbook::Phbook()
{
	size = 0;
	idx = 0;
}

std::string	Phbook::fill_up(std::string txt)
{
	std::string str;

	while (str.empty() && !std::cin.eof())
	{
		std::cout << txt;
		std::getline(std::cin, str);
	}
	return (str);
}

void	Phbook::add(int _idx)
{
	std::string first_name = fill_up("first name : ");
	std::string last_name = fill_up("last name : ");
	std::string nick_name = fill_up("nick name : ");
	std::string phnumber = fill_up("phnumber : ");
	std::string secret = fill_up("secret : ");
	if (size < 8)
		++size;
	arr[_idx] = Contact(first_name, last_name, nick_name, phnumber, secret);
}

void	Phbook::search_choice(void)
{
	std::string str;
	int	i;

	while (str != "e")
	{
		std::cout << "index) show detail (exit : e) : ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			break ;
		if (str.empty())
			continue ;
		std::stringstream stream;
		stream.str(str);
		while (stream >> i)
		{
			std::cout << i;
			if (0 < i && i <= size)
				arr[i - 1].show_detail(i);
		}
	}
}

void	Phbook::search(void)
{
	int i = -1;

	if (size == 0)
	{
		std::cout << "empty" << std::endl;
		return ;
	}
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|  index   |first name| last name| nickname |" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	while (++i < size)
	{
		arr[i].show_contact((i + 1));
		std::cout << "|----------|----------|----------|----------|" << std::endl;
	}
	search_choice();
}
