/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:50:32 by jeson             #+#    #+#             */
/*   Updated: 2022/02/01 20:04:46 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::Contact(std::string f, std::string l, std::string n, std::string p, std::string s)
{
	first_name = f;
	last_name = l;
	nick_name = n;
	phnumber = p;
	secret = s;
}

Contact::~Contact()
{
}

void	Contact::show_contact(int idx)
{
	std::string str;

	std::cout << "|" << std::setw(10) << idx;
	str = first_name.length() > 10 ? first_name.substr(0, 9) + "." : first_name;
	std::cout << "|" << std::setw(10) << str;
	str = last_name.length() > 10 ? last_name.substr(0, 9) + "." : last_name;
	std::cout << "|" << std::setw(10) << str;
	str = nick_name.length() > 10 ? nick_name.substr(0, 9) + "." : nick_name;
	std::cout << "|" << std::setw(10) << str << "|" << std::endl;
}

void	Contact::show_detail(int idx)
{
	std::cout << "------->>  " << idx << "  <<-------" << std::endl;
	std::cout << "first name : " << first_name << std::endl;
	std::cout << "last name  : " << last_name << std::endl;
	std::cout << "nickname   : " << nick_name << std::endl;
	std::cout << "phnumber   : " << phnumber << std::endl;
	std::cout << "secret     : " << secret << std::endl;
	std::cout << "-----------------------" << std::endl;
}
