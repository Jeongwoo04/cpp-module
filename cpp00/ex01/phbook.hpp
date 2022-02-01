/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phbook.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:24:48 by jeson             #+#    #+#             */
/*   Updated: 2022/02/01 20:05:28 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHBOOK_HPP
#define PHBOOK_HPP

#include <iostream>
#include <string>
#include <sstream>
#include "Contact.hpp"

class Phbook
{
private:
	int size;
	int	idx;
	Contact arr[8];
	std::string fill_up(std::string txt);
	void	search_choice(void);

public:
	Phbook();
	void	add(int idx);
	void	search(void);
};

#endif
