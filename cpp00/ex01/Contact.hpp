/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 16:50:37 by jeson             #+#    #+#             */
/*   Updated: 2022/02/01 20:04:56 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
private:
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phnumber;
	std::string	secret;

public:
	Contact();
	Contact(std::string _first_name, std::string _last_name, std::string _nick_name, std::string _phnumber, std::string _secret);
	void	show_contact(int idx);
	void	show_detail(int idx);
};

#endif
