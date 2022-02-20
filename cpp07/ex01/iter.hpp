/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeson <jeson@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 18:11:00 by jeson             #+#    #+#             */
/*   Updated: 2022/02/19 19:12:50 by jeson            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

// The first parameter is the address of an array,
// the second one is the length of the array and the
// third one is a function called for each element of the array.

template <typename T>
void	print_element(const T& arr)
{
	std::cout << arr << "\t";
}

template <typename T>
void	iter(T* arr, int length, void (*func)(const T&))
{
	for (int i = 0; i < length; i++)
		func(arr[i]);
}

#endif
