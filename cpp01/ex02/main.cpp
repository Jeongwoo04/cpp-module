/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/05 14:33:05 by jeson             #+#    #+#             */
/*   Updated: 2022/02/05 14:35:57 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR;
    std::string &stringREF = str;

    str = "HI THIS IS BRAIN";
    stringPTR = &str;
    std::cout << "Address\t: call by address\t : " << stringPTR << std::endl;
    std::cout << "Address\t: call by reference\t : " << &stringREF << std::endl;
    std::cout << "String\t: call by address\t : " << *stringPTR << std::endl;
    std::cout << "String\t: call by reference\t : " << stringREF << std::endl;
}
