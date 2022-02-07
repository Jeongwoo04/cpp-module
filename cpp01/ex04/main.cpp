/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:33:38 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 18:49:41 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int	_error(std::string str)
{
	std::cerr << str << std::endl;
	return (1);
}

int main(int argc, char **argv)
{
    std::string extend = ".replace";
	std::string	argv3;
	std::string argv2;
	int idx;
	char c;
	std::string	origin;
	std::string	replace;

	// error control
    if (argc != 4)
        return (_error("wrong command"));
	argv3 = argv[3];
	argv2 = argv[2];
    if (argv2.empty() || argv3.empty())
        return (_error("s1 or s2 is empty"));
    std::ifstream fin(argv[1]);
	// file open
	if (!fin.is_open())
		return (_error("file not open"));
	std::ofstream fre(argv[1] + extend);
	if (!fre.is_open())
	{
		fin.close();
		return (_error("file not open"));
	}
	// parsing
	while (fin.get(c))
		origin += c;
	idx = 0;
	// change
	while (origin.find(argv2, idx) != std::string::npos)
	{
		replace += origin.substr(idx, origin.find(argv2, idx) - idx);
		replace += argv3;
		idx = origin.find(argv2, idx) + argv2.length();
	}
	replace += origin.substr(idx, origin.find(argv2, idx));
	// make .replace
	fre << replace;
    fin.close();
	fre.close();
    return (0);
}