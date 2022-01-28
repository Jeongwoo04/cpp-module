/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 14:10:54 by jeson             #+#    #+#             */
/*   Updated: 2022/01/28 17:06:30 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_toupper(char ch)
{
	if (ch >= 65 && ch <= 90)
		return (ch);
	else if (ch >= 97 && ch <= 122)
		return (ch - 32);
	return (ch);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	argv++;
	while (*argv)
	{
		for (int i = 0; *argv[i]; argv[i]++)
			std::cout << ft_toupper(*argv[i]);
		argv++;
	}
	std::cout << std::endl;
	return (0);
}
