/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:33:38 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 15:09:10 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
    std::string extend = ".replace";
    std::string replace;
	char	c;

    if (argc != 4)
        return (1);
    if (!argv[2] || !argv[3])
        return (1);
    std::ifstream fin(argv[1]);
	std::ofstream fre(argv[1] + extend);
	if (!fin.is_open() || !fre.is_open())
		return (1);
	while (fin.get(c))
	{
		if (c == *argv[2])
			fre.write(&*argv[3], 1);
		else
			fre.write(&c, 1);
	}
    fin.close();
	fre.close();
    return (0);
}
