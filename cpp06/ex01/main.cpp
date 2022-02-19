/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:10:21 by jeson             #+#    #+#             */
/*   Updated: 2022/02/19 16:38:36 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstdint>

// Data* deserialize(uintptr_t raw);
// uintptr_t serialize(Data* ptr);

struct Data
{
	std::string	name;
	int	grade;
};

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}

int	main( void )
{
	Data d = {"jeson", 10};

	uintptr_t ser;
	Data* deser;

	std::cout << "========== Data d ==========" << std::endl;
	std::cout << "Name : " << d.name << ", Grade : " << d.grade << std::endl;
	std::cout << std::endl;

	std::cout << "========== Raw Address (serialize) ==========" << std::endl;
	ser = serialize(&d);
	std::cout << "Raw Address = " << ser << std::endl;
	std::cout << "Name : " << d.name << ", Grade : " << d.grade << std::endl;
	std::cout << std::endl;

	std::cout << "========== Deserialized Address (deserialize) ==========" << std::endl;
	deser = deserialize(ser);
	std::cout << "Deserialized Address = " << deser << std::endl;
	std::cout << "Name : " << d.name << ", Grade : " << d.grade << std::endl;
	std::cout << "========== finish ==========" << std::endl;

	return ( 0 );
}
